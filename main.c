#include<stdio.h>
#include"mandelbrot.h"

const int MAX_ROWS = 75;
const int MAX_COLUMNS = 75;
const int ITERATIONS = 255;

struct complex translateCoordinateToComplex(int x, int y, int max_x, int max_y) {
    struct complex c;
    c.im = ((double)x / (double)max_x) * 3 - 1.5 + 0.6;
    c.re = ((double)y / (double)max_y) * 3 - 1.5 - 0.6;
    return c;
}

void asciiMandelbrotArt() {
    for (int row=0; row < (MAX_ROWS - (MAX_ROWS * 0.375)); row++) {
        for (int column=0; column < MAX_COLUMNS; column++) {
            struct complex c = translateCoordinateToComplex(row, column, MAX_ROWS, MAX_COLUMNS);
            int m = mandelbrot(&c, ITERATIONS);
            if (m == ITERATIONS) {
                printf("•");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    asciiMandelbrotArt();
    return 0; 
}