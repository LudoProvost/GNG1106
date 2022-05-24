#include <stdio.h>

int main() {
    int i, num1, num2, num3, avr;
    for (i = 0; i < 10; i++) {
        printf("Please enter a number:\n");
        scanf("%d", &num1);
        if (i > 1) {
            avr = (num1 + num2 + num3) / 3;
        printf("The average is: %d\n", avr);
        printf("\n");
        }
        num2 = num1;
        num3 = num2;
    } return 0;
}