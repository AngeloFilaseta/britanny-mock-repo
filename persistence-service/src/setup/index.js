const cors = require('./corsPolicy')
const bodyParser = require('./jsonBodyParser')
var mongoose = require('./mongoose')
const routes = require('./routes')

module.exports.setupServer = function(server){
    cors.setCorsPolicy(server)
    bodyParser.setBodyParser(server)
    mongoose.setMongoose()
    routes.setRoutes(server)
}
