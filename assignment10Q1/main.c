#include<stdio.h>
#include<math.h>

double func(double x) {
    return 0.1 * pow(x, 5) + 4 * pow(x, 4) + 0.02 * pow(x, 3) - 0.5 * pow(x, 2) + x - 2;
}

double bisection(double a,double b) {
    int wasRootFound = 0;
    double errorBound = 0.0001, midpoint;
    while ((b - a) >= errorBound && !wasRootFound) {
        midpoint = (a + b) / 2;
        if (func(midpoint) == 0.0) {
            wasRootFound = 1;
        }
        else if (func(midpoint) * func(a) < 0) {
            b = midpoint;
        }
        else {
            a = midpoint;
        }
    }
    return midpoint;
}

int main() {
    double a = 0, b = 1;
    printf("The root of the function on the interval [%lf, %lf] is: %lf\n", a, b, bisection(a, b));
    return 0;
}