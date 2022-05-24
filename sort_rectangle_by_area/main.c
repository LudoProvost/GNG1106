#include <stdio.h>

typedef struct {
    int width;
    int length;
}rectangle;

void swap(rectangle *a, rectangle *b) {
    rectangle c;
    c = *a;
    *a = *b;
    *b = c;
}

int shouldAProceedB(rectangle *pA, rectangle *pB) {
    int out = 1;
    if (pA->length * pA->width > pB->length * pB->width) {
        out = 0;
    } return out;
}

int getIndexOfObjectToBePutAtTheEndOfArray(rectangle *x, int arrayLength) {
    int index=0; // assuming x[0] is the largest
    int i;
    for (i = 1; i < arrayLength; i++) {
        if (!shouldAProceedB(x + i, x + index)) //x+i points to A and x+index points to B
            index = i;
    } return index;
}

void replacementSortRectangle(rectangle *x, int arrayLength) {
    int i; // pass index
    int k;
    for (i = 0; i < arrayLength - 1; i++) {
        k = getIndexOfObjectToBePutAtTheEndOfArray(x, arrayLength - i);
        swap(&x[k], &x[arrayLength - i - 1]);
    }
}

void printArray(rectangle *x, int arrayLength) {
    int i;
    for (i = 0; i < arrayLength; i++){
        printf("\t%d, %d", x[i].width, x[i].length);
    }
}

int main() {
    rectangle a[6]={{5, 3}, {6, 2}, {1, 3}, {3, 2}, {8, 2}, {4, 6}};
    replacementSortRectangle(a, 6);
    printArray(a, 6);
    return 0;
}

