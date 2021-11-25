FROM node:alpine
COPY package.json .
RUN	npm install --silent
COPY . .
CMD node index.js
