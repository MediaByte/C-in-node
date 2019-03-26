//index.js
const { sayHello } = require('./build/Release/helloWorld.node');

console.log(sayHello());

module.exports = sayHello;