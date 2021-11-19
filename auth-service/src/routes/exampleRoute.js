const express = require('express');
const router = express.Router();

router.get("/exampleRoute/greetings",(req, res) => {
    res.status(200).send('Hello there!')
});

router.post("/exampleRoute/increment", (req, res) => {
    if(req.body.x !== null && req.body.x !== undefined && Number.isInteger(req.body.x)){
        res.status(200).json({x: req.body.x + 1})
    } else {
        res.status(406).json({err: "x is not an integer"})
    }
});

module.exports = router;
