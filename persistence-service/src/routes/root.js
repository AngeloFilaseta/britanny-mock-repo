const express = require('express')
const router = express.Router()

router.get("/", async function(req, res){
    console.log(req)
    res.status(200).send('App is running')
})

module.exports = router
