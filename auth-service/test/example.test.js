const server = require('../src/server')
//const mongoose = require("mongoose")
const supertest = require('supertest')

/* -- Recreates and drops db after each test (beforeAll and afterAll available)

beforeEach((done) => {
  mongoose.connect("mongodb://localhost:27017/JestDB",
    { useNewUrlParser: true, useUnifiedTopology: true },
    () => done());
})

afterEach((done) => {
  mongoose.connection.db.dropDatabase(() => {
    mongoose.connection.close(() => done())
  });
})

*/

it('Testing to see if Jest works', () => {
  expect(1).toBe(1)
})

test("GET /exampleRoute/greetings", async () => {
  await supertest(server)
    .get("/exampleRoute/greetings")
    .expect(200)
    .then((response) => {
      expect(response.text).toEqual("Hello there!")
    })
})

test("POST /exampleRoute/increment", async () => {
  await supertest(server)
    .post("/exampleRoute/increment")
    .send({x: 0})
    .set('Accept', 'application/json')
    .expect('Content-Type', /json/)
    .expect(200)
    .then((response) => {
      expect(response.body.x).toEqual(1)
    })
})
  