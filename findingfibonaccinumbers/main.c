#include <stdio.h>

int main() {
    int firstNumber = 0;
    int secondNumber = 1;
    int fibonacciNumber = 1;
    int i, k;
    printf("How many fibonacci numbers do you want printed? \n");
    scanf("%d", &k);
    if (k <= 2) {
        printf("the amount of fibonacci numbers you want printed needs to be greater than 2");
    } else {
        for (i = 0; i < k; i++) {
            printf("%d\n", fibonacciNumber);
            fibonacciNumber = firstNumber + secondNumber;
            firstNumber = secondNumber;
            secondNumber = fibonacciNumber;
        }
    } return 0;
}
