#include <stdio.h>

int main() {
    double x = 0.01, fOfx;
    FILE *fp;
    char *fileName = "/Users/Ludovic Provost/Desktop/file.txt";
    fp = fopen(fileName, "w");
    while (x <= 10) {
        fOfx = 2 * x + (2 / x);
        fprintf(fp, "%lf\t%lf\n", x, fOfx);
        x += 0.01;
    }
    fclose(fp);
    return 0;
}
