var mongoose = require('mongoose')
var conf = require('../conf')

module.exports.setMongoose = function() {
    mongoose.connect(conf.dbAddress, {useNewUrlParser: true, useUnifiedTopology: true})
        .then(() => {
            console.log("DB is connected!")
        })
        .catch(err => {
            console.log("DB connection:\n", err.message)
        })
}
