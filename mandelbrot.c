#include<stdio.h>
#include"mandelbrot.h"

int mandelbrot(struct complex *c, int iterations) {
    struct complex z;
    for (int i=0; i < iterations; i++) {
        square(&z);
        add(&z, c);
        if (abs_square(&z) > 42) {
            return i;
        }
    }
    return iterations;
}