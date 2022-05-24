#include<stdio.h>
#include<math.h>
#define pi 3.14159265359

double f(double x){
    return (1 / (sqrt(2 * pi))) * exp(-((x - 1) * (x - 1)) / 2);
}

double findIntegral(double a, double b, double numberOfSubIntervals) {
    int i;
    double riemannSum = 0, height;
    height = (b - a) / numberOfSubIntervals;
    for (i = 1; i < numberOfSubIntervals; i++) {
        riemannSum += f(a + i * height);
    }
    return (height / 2) * (f(a) + f(b) + 2 * riemannSum);
}

int main() {
    double a = 0, b = 2, numberOfSubIntervals = 100;
    printf("The integral is: %0.2f\n", findIntegral(a, b, numberOfSubIntervals));
}