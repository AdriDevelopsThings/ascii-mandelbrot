#ifndef COMPLEX_H
#define COMPLEX_H

struct complex {
    double re;
    double im;
};

void square(struct complex *c);

void add(struct complex *c1, struct complex *c2);

double abs_square(struct complex *c);

#endif