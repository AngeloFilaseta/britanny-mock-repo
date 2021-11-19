const cors = require('cors')
const corsOptions = {
    origin: require("../../conf").clientAddress + ":" + require("../../conf").clientPort,
    credentials: true,
}

module.exports.setCorsPolicy = function(server) {
    server.use(cors(corsOptions))
}
