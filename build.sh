#!/bin/sh

g++ -std=c++14 -O2 -Wall main.cpp -o main && printf "compiled.\n" && ./main && rm main