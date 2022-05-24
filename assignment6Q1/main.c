#include <stdio.h>

int main() {
    int a,b, c, counter = 0;
    for (a = 1; a < 1000; a++) {
        for (b = a + 1; b < 1000; b++) {
            for (c = b + 1; c < 1000; c++) {
                if (c * c == (a * a) + (b * b)) {
                    printf("%d, %d, %d\n", a, b, c);
                    counter++;
                }
            }
        }
    }
    printf("there are %d pythagorean triplets\n", counter);
    return 0;
}