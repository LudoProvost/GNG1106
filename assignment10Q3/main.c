#include <stdio.h>
#include <math.h>

double solveForFirstOrderDEX(double x, double t);
double solveForFirstOrderDEY(double y, double t);

int main() {
    double x0 = 0, y0 = 0, t0 = 0, h = 0.01, m;
    int i;
    for (i = 0; i < 300; i++) {
        m = solveForFirstOrderDEX(x0, t0);
        x0 += h * m;
        m = solveForFirstOrderDEY(y0, t0);
        y0 += h * m;
        t0 += h;
        printf("%lf\t%lf\n%lf", x0, y0, t0);
    }
    return 0;
}

double solveForFirstOrderDEX(double x, double t) {
    double f;
    f = x + exp((-1 * t) / 2) * cos(5 * t);
    return f;
}

double solveForFirstOrderDEY(double y, double t) {
    double f;
    f = (0.5 * y) + exp((-1 * t) / 2) * sin(5 * t);
    return f;
}