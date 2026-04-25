

void square(int *red, int *blue, int *green, int x, int y, int width, int height, int i, int j, int color_red, int color_green, int color_blue) {
    if (i >= y && i <= y + height) {
        if (j >= x && j <= x + width) {
            *red = color_red;
            *blue = color_blue;
            *green = color_green;
        }
    }
}

// Broken but looks cool (implement as new shape [sun or something])
void right_triangle(int *red, int *blue, int *green, int x, int y, int width, int height, int i, int j) {
    if (i >= y && i <= y + height) {
        if (j >= x && j <= width - (i - x)) {
            *red = 255;
            *blue = 50;
            *green = 255;
        }
    }
}