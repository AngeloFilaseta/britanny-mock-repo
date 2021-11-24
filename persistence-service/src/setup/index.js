const cors = require('./corsPolicy')
const bodyParser = require('./jsonBodyParser')
const routes = require('./routes')

module.exports.setupServer = function(server){
    cors.setCorsPolicy(server)
    bodyParser.setBodyParser(server)
    routes.setRoutes(server)
}
