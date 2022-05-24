#include <stdio.h>

int main() {
    FILE *fp;
    int i, numberOfMultiplesOf17 = 0, num1;
    char *fileNameInput = "/Users/Ludovic Provost/Desktop/data (1).txt";
    fp = fopen(fileNameInput, "r");
    if (fp!=NULL) {
        for (i = 0; i < 500; i++) {
            fscanf(fp, "%d", &num1);
            if (num1 % 17 == 0) {
                numberOfMultiplesOf17++;
            }
        }
        fclose(fp);
    }
    printf("there are %d multiples of 17.", numberOfMultiplesOf17);
    return 0;
}