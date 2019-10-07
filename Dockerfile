FROM ubuntu:latest

WORKDIR /root/http-server

COPY . .
RUN apt-get update
RUN apt-get install make -y
RUN apt-get install gcc -y
RUN make build

EXPOSE 80

ENTRYPOINT ["./server.out"]
