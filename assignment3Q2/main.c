#include <stdio.h>

int main() {
    int userInteger=0;
    int smallestValue;
    int i;
    for (i=0;i<10;i++) {
        printf("enter a positive integer\n");
        scanf("%d", &userInteger);
        if (userInteger < smallestValue)
            smallestValue = userInteger;
    }
    printf("The smallest value you entered was: %d", smallestValue);
    return 0;
}
