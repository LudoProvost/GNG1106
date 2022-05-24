#include <stdio.h>

int findMax(int *array, int arrayLength) {
    int i, LargestIndex = 0;
    for(i = 0; i < arrayLength; i++) {
        if (array[i] > LargestIndex) {
            LargestIndex = array[i];
        }
    }
    return LargestIndex;
}

int main()
{
    int a[6] = {1,2,3,544,56,600};
    findMax(a, 6);
}
