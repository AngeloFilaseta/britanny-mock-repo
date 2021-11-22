FROM node:13.12.0-alpine

COPY . ./
RUN npm install --silent
RUN npm install react-scripts@3.4.1 -g --silent

RUN npm run build

RUN npm install -g serve

CMD ["serve", "-s", "build"]
