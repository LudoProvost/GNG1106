#include <stdio.h>

int main() {
    FILE *fp;
    FILE *fs;
    int rows, columns, i, j, biggestOfRow, num1;
    char *fileNameInput = "/Users/Ludovic Provost/Desktop/myData (1).txt";
    char *fileNameOutput = "/Users/Ludovic Provost/Desktop/foundLargest.txt";
    fs = fopen(fileNameOutput, "w");
    fp = fopen(fileNameInput, "r");
    if (fp!=NULL) {
        fscanf(fp, "%d%d", &rows, &columns);
        for (i = 0; i < rows; i++) {
            fscanf(fp, "%d", &biggestOfRow);
            for (j = 0; j < columns - 1; j++) {
                fscanf(fp, "%d", &num1);
                if (num1 > biggestOfRow) {
                    biggestOfRow = num1;
                }
            }
            fprintf(fs, "%d\n", biggestOfRow);
        }
        fclose(fp);
        fclose(fs);
    }
    return 0;
}
