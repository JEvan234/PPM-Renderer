#!/bin/bash

gcc /src/main -o /build/main
/build/main > image.ppm
pnmtopng build/image.ppm build/image.png