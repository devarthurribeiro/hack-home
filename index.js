const express = require('express');
const app = express();
const SerialPort = require("serialport");
const arduino = new SerialPort("/dev/ttyACM0");

app.get('/gate', (req, res) => {
  arduino.write('a');
  res.send('Open/close gate');
});

app.listen(3000, () => {
  console.log('listen port 3000');
});
