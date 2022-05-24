#include <stdio.h>

int getUserInput();
void printPrimeFactorsFor(int);

int main() {
    printPrimeFactorsFor(getUserInput());
    return 0;
}

int getUserInput() {
    int userInput = 0;
    while (userInput <= 1) {
        printf("Print an integer greater than 1:\n");
        scanf("%d", &userInput);
    }
    return userInput;
}

void printPrimeFactorsFor(int userInput) {
    int factor = 2;
    int isXNew = 1;
    while (userInput != 1) {
        if (!isXNew) {
            factor++;
        }
        if (userInput % factor == 0) {
            printf("%d  ", factor);
            userInput = userInput / factor;
            isXNew = 1;
        } else {
            isXNew = 0;
        }
    }
}