var mongoose = require('mongoose')
const server = require("./src/server")
var conf = require('./src/conf')
require('dotenv').config()

const port = process.env.PORT
const db = process.env.DB

if(port === null || port === undefined || isNaN(port) || !Number.isInteger(+port) || +port < 0){
    throw ("Invalid port")
} else if(db === null || db === undefined){
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
