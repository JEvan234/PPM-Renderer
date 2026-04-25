// PPM Renderer in C
#include <stdio.h>
#include "shapes.h"

int main() {

    int image_width = 256;
    int image_height = 256;

    // print header for ppm rendering
    printf("P3\n");
    printf("%d %d 255\n", image_width, image_height); // 255 is color depth


    // loops for pixel generation, goes across row, then down a column (like a CRT)

    // i = y axis, j = x axis
    for (int i = 0; i < image_height; i ++) {
        for (int j = 0; j < image_width; j ++) {
            int red = 50;
            int green = 150;
            int blue = 190;

            square(&red, &blue, &green, 0, 150, 256, 106, i, j, 50, 195, 50);
            // All foreground objects here (lower takes priority)
            square(&red, &blue, &green, 0, 0, 50, 50, i, j, 255, 0, 0);



            printf("%d %d %d ", red, green, blue);
        }
        printf("\n");
    }


    return 0;
}