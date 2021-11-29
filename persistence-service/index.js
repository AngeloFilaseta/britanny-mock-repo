var mongoose = require('mongoose')
const server = require("./src/server")
var conf = require('./src/conf')
require('dotenv').config()

const port = process.env.PORT || 8080
const db = 'mongodb+srv://admin:EtqjqcSGgIJsrHNS@persistence.u2eib.mongodb.net/myFirstDatabase?retryWrites=true&w=majority'

console.log("LA VARIABILE TEST: " + process.env.TEST)
if(db === null || db === undefined){
    throw ("Variable db is null")
} else {
    mongoose
    .connect(db, {useNewUrlParser: true, useUnifiedTopology: true})
    .then(() => {
        console.log("DB is connected!")
        server.listen(+port, () => {
            console.log(conf.asciiArt)
            console.log(`Listening on port ${port}`)
        })
    })
    .catch(err => {
        console.log("Error connecting to DB " + db)
        console.log("DB connection:\n", err.message)
    })
}
