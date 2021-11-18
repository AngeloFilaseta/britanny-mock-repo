const express = require('express');
const cors = require('cors');
const bodyParser = require("body-parser");
const app = express();
const port = 3000;
const corsOptions = {
    origin: require("./conf/conf").clientAddress + ":" + require("./conf/conf").clientPort,
    credentials: true,
};

// add cors policy
app.use(cors(corsOptions));

//decode every request body to json format
app.use(bodyParser.json());

app.get('/', (req, res) => {
  res.send('Hello World!');
})

app.listen(port, () => {
  console.log(`Example app listening at http://localhost:${port}`);
})
