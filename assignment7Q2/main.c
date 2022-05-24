#include <stdio.h>

int linearSearch(int *array, int arrayLength, int key);

int main() {
    int array[10] = {1,2,3,4,5,6,77,832,512,123};
    int key = 43;
    printf("%d", linearSearch(array, 10, key));
}

int linearSearch(int *array, int arrayLength, int key) {
    int i, index = -1;
    for (i = 0; i < arrayLength; i++) {
        if (array[i] == key)
            index = i;
    } return index;
}