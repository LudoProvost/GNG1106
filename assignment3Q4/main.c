#include <stdio.h>

int main() {
    int userInteger;
    int lastInteger;
    int numberOf11=0;
    int i;
    for (i=0;i<10;i++) {
        printf("enter a positive integer\n");
        scanf("%d", &userInteger);
        if (userInteger == lastInteger && userInteger == 1) {
            numberOf11 += 1;
        }
        lastInteger = userInteger;
    }
    printf("You entered 1 twice in a row %d times", numberOf11);
    return 0;
}
