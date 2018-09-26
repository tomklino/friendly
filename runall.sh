#!/bin/bash
export MILLION=1000000;

echo "====== running c ======";
time ./c/friendly $MILLION;

echo "====== running go ======";
time ./go/friendly $MILLION;

echo "====== running js ======";
time node js/friendly.js $MILLION;

echo "====== running python ======";
time python python/friendly.py $MILLION;

echo "====== running rust ======";
time ./rust/friendly $MILLION;

