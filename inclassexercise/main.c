#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int getIndexOfLargestValueInArray(int *a, int arrayLength) {
    int index=0; // assuming x[0] is the largest
    int i;
    for (i = 1; i < arrayLength; i++) {
        if (a[i] > a[index])
            index = i;
    } return index;
}

void replacementSortInt(int *a, int arrayLength) {
    int i; // pass index
    int k;
    for (i = 0; i < arrayLength - 1; i++) {
        k = getIndexOfLargestValueInArray(a, arrayLength - i);
        swap(&a[k], &a[arrayLength - i - 1]);
    }
}

void printArray(int *a, int arrayLength) {
    int i;
    for (i = 0; i < arrayLength; i++){
        printf("\t%d", a[i]);
    }
}

int main() {
    int a[6]={5, 6, 1, 3, 8, 2};
    replacementSortInt(a, 6);
    printArray(a, 6);
    return 0;
}

