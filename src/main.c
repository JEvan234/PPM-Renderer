// PPM Renderer in C
#include <stdio.h>

int main() {

    int image_width = 256;
    int image_height = 256;

    // print header for ppm rendering
    printf("P3\n");
    printf("%d %d 255\n", image_width, image_height); // 255 is color depth


    // loops for pixel generation, goes across row, then down a column (like a CRT)
    for (int i = 0; i < image_height; i ++) {
        for (int j = 0; j < image_width; j ++) {
            int red = 255;
            int blue = 0;
            int green = 125;
            printf("%d %d %d ", red, blue, green);
        }
        printf("\n");
    }


    return 0;
}