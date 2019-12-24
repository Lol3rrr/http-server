#!/bin/bash

./server.out -p 8080 & serverPid=$!
speedTester -url=http://localhost:8080 & speedPid=$!

wait $speedPid

kill $serverPid
