const mongoose = require("mongoose")
const conf = require('../../src/conf')

module.exports.createConnectionToDB = function(completionCallback){
    mongoose.connect(
        conf.dbAddress,
        { useNewUrlParser: true, useUnifiedTopology: true },
        () => completionCallback()
    )
}

module.exports.dropConnectedDB = function(completionCallback){
    mongoose.connection.db.dropDatabase(() => {
      mongoose.connection.close(() => completionCallback())
    })
}
