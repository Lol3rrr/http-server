FROM ubuntu:18.04

WORKDIR /root/http-server

RUN apt-get update
RUN apt-get install --no-install-recommends -y make
RUN apt-get install --no-install-recommends -y gcc
RUN apt-get clean
RUN rm -rf /var/lib/apt/lists/*

COPY . .
RUN make build

EXPOSE 80

ENTRYPOINT ["./server.out"]
