const express = require('express')
const router = express.Router()
const TemperatureFactory = require('../mongoose/factories/temperature')
const Temperature = require('../mongoose/temperature')

router.post("/temperature/save", (req, res) => {
    let newTemperature = TemperatureFactory.createTemperature(req.body.time, req.body.value);
    newTemperature.save().then(() => {
        res.status(200).json()
    }).catch(err => {
        res.status(400).json({err: err})
    })
})

router.get("/temperature/exists", async function(req, res){
    if(req.body.value === null || req.body.value === undefined || isNaN(req.body.value)){
        res.status(406).json({err: "Some argument is not valid"})
    } else {
        await Temperature.findOne({ value: req.body.value}).then(async result => {
            res.status(200).json({exists: !!result})
        }).catch(err => {
            res.status(400).json({err: err})
        })
    }
})

module.exports = router
