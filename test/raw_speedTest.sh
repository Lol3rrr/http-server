#!/bin/bash

echo "------ Template Engine ------"

./server.out -p 8080 & serverPid=$!

echo "--- Size: 1kb   ---"
speedTester -url=http://localhost:8080/1kb & speedPid=$!
wait $speedPid

echo "--- Size: 10kb  ---"
speedTester -url=http://localhost:8080/10kb & speedPid=$!
wait $speedPid

echo "--- Size: 100kb ---"
speedTester -url=http://localhost:8080/100kb & speedPid=$!
wait $speedPid

echo "--- Size: 1mb   ---"
speedTester -url=http://localhost:8080/1mb & speedPid=$!
wait $speedPid

kill $serverPid
