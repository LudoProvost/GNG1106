#include <stdio.h>

void swapHeadTail(int *ptr, int arrayLength) {
    int temp;
    temp = ptr[0];
    ptr[0] = ptr[arrayLength - 1];
    ptr[arrayLength - 1] = temp;
}

int main() {
    int a[4]={1, 2, 3, 4};
    int b[5]={10, 20, 30, 40, 50};
    int i, arrayLength;
    arrayLength = sizeof(a) / 4;
    swapHeadTail(a, arrayLength);
    for (i=0;i < arrayLength; i++) {
        printf("%d  ", a[i]);
    }
    printf("\n");
    arrayLength = sizeof(b) / 4;
    swapHeadTail(b, arrayLength);
    for (i=0;i < arrayLength; i++) {
        printf("%d  ", b[i]);
    }
    return 0;
}
