#!/bin/bash

gcc src/main.c -o build/main
./build/main | pnmtopng > build/image.png