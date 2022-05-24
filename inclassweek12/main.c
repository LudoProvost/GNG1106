#include <stdio.h>
#include <math.h>

double f(double x) {

}

double findIntegral(double a, double b, int numberOfSubIntervals) {
    int i;
    double sum = 0;
    double height, x, integral;
    height = (b - a) / numberOfSubIntervals;
    for(i = 1; i < numberOfSubIntervals; i++) {
        x = a + i * height;
        sum += f(x);
    }
    integral = (f(a) + f(b) + 2 * sum) * (height / 2);
    return integral;
}
