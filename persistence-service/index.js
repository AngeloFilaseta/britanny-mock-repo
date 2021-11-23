const server = require("./src/server")
var conf = require('./src/conf')

server.listen(conf.servicePort, () => {
    console.log(conf.asciiArt)
    console.log(`Persistence service listening at http://localhost:${conf.servicePort}`)
})
