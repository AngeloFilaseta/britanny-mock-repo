const server = require('../src/server')
const db = require('./util/db')
const get = require('./util/get')

beforeEach((done) => db.createConnectionToDB(done))

afterEach((done) => db.dropConnectedDB(done))

test(
  "Checking for a temperature existence on non-existing temperature", async () => {
    await get.test(server, "/temperature/exists")
      .body({value: 420})
      .onResponse((response) => {expect(response.body.exists).toBe(false)})
      .execute()
  }
)

test(
  "Checking for a temperature existence with NaN value", async () => {
    await get.test(server, "/temperature/exists")
      .body({value: "wrong"})
      .code(406)
      .execute()
  }
)

test(
  "Checking for a temperature existence without specifying a value", async () => {
    await get.test(server, "/temperature/exists")
      .code(406)
      .execute()
  }
)

/*
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
})*/
  