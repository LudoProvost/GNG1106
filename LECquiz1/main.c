#include <stdio.h>
#define ARRAY_LENGTH 9

int main() {
    int a[ARRAY_LENGTH];
    int i;
    int k;
    int indexLow = 0, indexHigh = ARRAY_LENGTH - 1, pos = -1, midIndex;
    printf("enter 9 int values\n");
    for (i=0; i<ARRAY_LENGTH; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter a search key:\n");
    scanf("%d", &k);
    while ((indexLow <= indexHigh) && (pos == -1)) {
        midIndex = (indexLow + indexHigh) / 2;
        if (k == a[midIndex])
            pos = midIndex;
        else if (k > a[midIndex])
            indexLow = midIndex + 1;
        else
            indexHigh = midIndex - 1;
    }
    if (pos == -1) {
        printf("not found");
    } else {
        printf("the index of the key in the array is %d", pos);
    } return 0;
}
