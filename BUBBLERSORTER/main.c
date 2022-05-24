#include <stdio.h>

void bubbleSorter(int *a, int arrayLength);

int main() {
    int i, array[5] = {40, 50, 30, 20, 10}, arrayLength;
    arrayLength = sizeof(array) / 4;
    bubbleSorter(array, arrayLength);
    for  (i = 0; i < arrayLength; i++) {
        printf("%d\t", array[i]);
    }
    return 0;
}

void bubbleSorter(int *a, int arrayLength) {
    int temp, i, j;
    for (j = 0; j < arrayLength - 1; j++) {
        for (i = 0; i < arrayLength - 1 - j; i++) {
            if (a[i] > a[i + 1]) {
                temp = a[i + 1];
                a[i + 1] = a[i];
                a[i] = temp;
            }
        }
    }
}