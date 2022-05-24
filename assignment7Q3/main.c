#include <stdio.h>

void cyclicShift(int *ptrArray, int arrayLength) {
    int i, temp = ptrArray[arrayLength - 1];
    for (i = 0; i < arrayLength; i++) {
        ptrArray[arrayLength - i] = ptrArray[arrayLength - i - 1];
    } ptrArray[0] = temp;
}

int main() {
    int a[5] = {1,2,3,4,5}, i;
    cyclicShift(a, 5);
    for (i = 0; i < 5; i++) {
        printf("%d\t", a[i]);
    }
    return 0;
}
