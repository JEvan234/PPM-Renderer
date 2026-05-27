// PPM Renderer in C
#include <stdio.h>
//Multithread library
#include <pthread.h>


/* Original implmentation

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

*/

void* generate_pixel(void* arg) {
    int red = 255;
    int blue = 0;
    int green = 125;

    printf("%d %d %d ", red, blue, green);

    return NULL;
}

void* new_line(void* arg) {
    printf("\n");
    return NULL;
}

int main() {

    int image_width = 256;
    int image_height = 256;

    pthread_t thread1;
    pthread_t thread2;

    printf("P3\n");
    printf("%d %d\n255\n", image_width, image_height);

    for (int i = 0; i < image_height; i++) {

        for (int j = 0; j < image_width; j++) {

            pthread_create(&thread1, NULL, generate_pixel, NULL);

            // Wait for thread to finish
            pthread_join(thread1, NULL);
        }

        pthread_create(&thread2, NULL, new_line, NULL);
        pthread_join(thread2, NULL);
    }

    return 0;
}