#!/bin/bash

sleep 25s
nice -n 9 ./liseev2.sh &
sleep 25s
nice -n 9 ./liseev3.sh &

