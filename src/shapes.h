

void square(int *red, int *blue, int *green, int x, int y, int width, int height, int i, int j) {
    if (i >= y && i <= y + height) {
        if (j >= x && j <= x + width) {
            *red = 255;
            *blue = 0;
            *green = 0;
        }
    }
}

void right_triangle(int *red, int *blue, int *green, int x, int y, int width, int height, int i, int j) {
    if (i >= y && i <= y + height) {
        if (j >= x && j <= i - x) {
            *red = 255;
            *blue = 0;
            *green = 0;
        }
    }
}