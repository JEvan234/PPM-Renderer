# PPM-Renderer
A simple C based PPM render tool

## Dependencies

- GCC or some C compiler
- A means to convert to a jpeg or png (I use 'pnmtopng')
- Thats it!

## How it works
All it does is print the nessesary RGB data in the correct spot and fed into a file, then view the image in either ppm, png, or jpeg!

## Build Script
Included is a build script, which is useful when working with it constantly. The source code is below

```bash
#!/bin/bash

gcc /src/main -o /build/main
/build/main > image.ppm
pnmtopng build/image.ppm build/image.png
```
