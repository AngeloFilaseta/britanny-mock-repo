FROM node:alpine
COPY package.json .
COPY package-lock.json .
RUN	npm install --silent
COPY . .
CMD PORT=80 DB=mongodb://database:27017/brittany_auth node index.js
