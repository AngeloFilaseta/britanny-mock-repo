var mongoose = require('mongoose')
const server = require("./src/server")
var conf = require('./src/conf')
require('dotenv').config()

const port = process.env.PORT || 8080
const db = process.env.DB || 'mongodb://127.0.0.1/brittany_persistence'

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
