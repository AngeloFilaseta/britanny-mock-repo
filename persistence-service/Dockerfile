FROM node:alpine
COPY package.json .
COPY package-lock.json .
RUN	npm install --silent
COPY . .
CMD PORT=80 DB='mongodb+srv://admin:EtqjqcSGgIJsrHNS@persistence.u2eib.mongodb.net/myFirstDatabase?retryWrites=true&w=majority' node index.js
 