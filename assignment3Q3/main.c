#include <stdio.h>

int main() {
    int userInteger=0;
    int numberOfEven=0;
    int i;
    for (i=0;i<10;i++) {
        printf("enter a positive integer\n");
        scanf("%d", &userInteger);
        if (userInteger % 2 == 0)
            numberOfEven += 1;
    }
    printf("You entered %d even numbers", numberOfEven);
    return 0;
}
