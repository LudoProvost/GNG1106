#include <stdio.h>

double f(double y, double t);

int main() {
    printf("Hello, World!\n");
    return 0;
}

void euler(double y0, double delta, int numOfTimePoints, double *pYs) {
    int i;
    double t = 0;
    for (i = 0; i < numOfTimePoints; i++) {
        *(pYs + i) = y0 + delta * f(y0, t);
        t += delta;
        y0 = *(pYs + i);
    }
}

