FROM ubuntu:18.04 AS build

WORKDIR /root/http-server

RUN apt-get update
RUN apt-get install -y make
RUN apt-get install -y gcc
RUN apt-get clean
RUN rm -rf /var/lib/apt/lists/*

COPY . .
RUN make build_static

FROM alpine:latest

WORKDIR /root/http-server

COPY --from=build /root/http-server/server.out /root/http-server/server.out

EXPOSE 80

ENTRYPOINT ["./server.out"]
