FROM node:alpine
COPY package.json .
COPY package-lock.json .
RUN	npm install --silent
COPY . .
CMD PORT=8080 DB=mongodb://database:27017/brittany_persistence node index.js
