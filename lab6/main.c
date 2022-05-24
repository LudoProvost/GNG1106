#include <stdio.h>

int main() {
    int n;
    float userInput, answer = 1, exp = 1;
    printf("Enter the value for x:\n");
    scanf("%f", &userInput);
    for (n = 1; n <= 1000; n++) {
        exp = exp * userInput / n;
        answer = answer + exp;
    }
    printf("e to the x is equal to %f", answer);
    return 0;
}