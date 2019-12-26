#!/bin/bash

echo "------    Raw Speed    ------"

./server.out -p 8081 -t & serverPid=$!

echo "--- Size: 1kb   ---"
speedTester -url=http://localhost:8081/1kb & speedPid=$!
wait $speedPid

echo "--- Size: 10kb  ---"
speedTester -url=http://localhost:8081/10kb & speedPid=$!
wait $speedPid

echo "--- Size: 100kb ---"
speedTester -url=http://localhost:8081/100kb & speedPid=$!
wait $speedPid

echo "--- Size: 1mb   ---"
speedTester -url=http://localhost:8081/1mb & speedPid=$!
wait $speedPid

kill $serverPid
