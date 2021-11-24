const supertest = require('supertest')

module.exports.test = function(server, route){
    return new PostTester(server, route)
}

class PostTester{

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
        executePostTest(this.#server, this.#route, this.#providedBody, this.#expectedCode, this.#providedOnResponseCalback)
    }
}

function executePostTest(server, route, body, expectedCode, responseCalback){
    supertest(server)
        .post(route)
        .send(body)
        .set('Accept', 'application/json')
        .expect('Content-Type', /json/)
        .expect(expectedCode)
        .then((response) => responseCalback(response))
        .catch()
}
  