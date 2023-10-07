#include"complex.h"

void square(struct complex *c) {
    struct complex new_c;
    new_c.re = (c->re * c->re) - (c->im * c->im);
    new_c.im = 2 * c->re * c->im;
    *c = new_c;
}

void add(struct complex *c1, struct complex *c2) {
    c1->re += c2->re;
    c1->im += c2->im;
}

double abs_square(struct complex *c) {
    return (c->re * c->re) + (c->im * c->im);
}