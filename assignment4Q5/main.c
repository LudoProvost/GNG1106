#include <stdio.h>

int main() {
    int i = 0;
    for (i = 1; i <= 100; i++) {
        printf("%d    ", i);
        if (i % 10 == 0)
            printf("\n");
    }
    return 0;
}
