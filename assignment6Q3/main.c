#include <stdio.h>

int main() {
    int userArray[5];
    int userInput, valueInAnswer, i;
    printf("Enter a 5 digit number:\n");
    scanf("%d", &userInput);
    valueInAnswer = userInput;
    for (i = 0; i < 5; i++) {
        userArray[4-i] = userInput % 10;
        userInput /= 10;
    }
    if (userArray[0] == userArray[4] && userArray[1] == userArray[3])
        printf("%d is a palindrome", valueInAnswer);
    else
        printf("%d is not a palindrome", valueInAnswer);
    return 0;
}
