const supertest = require('supertest')

module.exports.test = function(server, route){
    return new GetTester(server, route)
}

class GetTester{

    #server
    #route
    #expectedCode
    #providedBody
    #providedOnResponseCalback

    constructor(server, route){
        this.#server = server
        this.#route = route
        this.#expectedCode = 200
        this.#providedBody = {}
        this.#providedOnResponseCalback = (_) => {/* does nothig */}
    }

    code(expectedCode){
        this.#expectedCode = expectedCode
        return this
    }

    body(providedBody){
        this.#providedBody = providedBody
        return this
    }

    onResponse(callback){
        this.#providedOnResponseCalback = callback
        return this
    }

    execute(){
        executeGetTest(this.#server, this.#route, this.#providedBody, this.#expectedCode, this.#providedOnResponseCalback)
    }
}

function executeGetTest(server, route, body, expectedCode, responseCalback){
    supertest(server)
        .get(route)
        .send(body)
        .set('Accept', 'application/json')
        .expect('Content-Type', /json/)
        .expect(expectedCode)
        .then((response) => responseCalback(response))
}
  