#!/bin/bash

./server.out -p 8080 & serverPid=$!
speedTester -url=http://localhost:8080/1kb & speedPid=$!
wait $speedPid

speedTester -url=http://localhost:8080/10kb & speedPid=$!
wait $speedPid

speedTester -url=http://localhost:8080/100kb & speedPid=$!
wait $speedPid

speedTester -url=http://localhost:8080/1mb & speedPid=$!
wait $speedPid

kill $serverPid
