FROM ubuntu:latest

RUN apt-get update && apt-get install -y g++

COPY . /app
WORKDIR /app

RUN g++ -o fraction_app fraction.cpp main.cpp

CMD ["./fraction_app"]
