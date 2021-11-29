const cors = require('cors')
var conf = require('../conf')

let whitelist = [conf.webClientAddress]

const corsOptions = {
    origin: function(origin, callback){
        if(whitelist.indexOf(origin) === -1){
          var message = "The CORS policy for this origin doesn't allow access from the particular origin."
          return callback(new Error(message), false);
        }
        return callback(null, true);
      },
    credentials: true,
}

module.exports.setCorsPolicy = function(server) {
    server.use(cors(corsOptions))
}
