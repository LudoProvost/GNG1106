#include <stdio.h>

int main() {
    int userInput, i, j, numberOfLines;
    printf("Enter a positive integer greater than 1:\n");
    scanf("%d", &userInput);
    numberOfLines = userInput;
    for (j = 0; j < numberOfLines; j++) {
        for (i = 0; i < userInput; i++)
            printf("o");
        printf("\n");
        userInput--;
    }
    return 0;
}