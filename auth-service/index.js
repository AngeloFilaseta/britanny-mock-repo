var mongoose = require('mongoose')
const server = require("./src/server")
var conf = require('./src/conf')

mongoose
    .connect(conf.dbAddress, {useNewUrlParser: true, useUnifiedTopology: true})
    .then(() => {
        console.log("DB is connected!")
        server.listen(conf.servicePort, () => {
            console.log(conf.asciiArt)
            console.log(`Auth service listening at http://localhost:${conf.servicePort}`)
        })
    })
    .catch(err => {
        console.log("DB connection:\n", err.message)
    })
