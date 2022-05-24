#include <stdio.h>

int main() {
    int userInput;
    int i = 0;
    int lastInput;
    int count = 0;
    for (i = 0; i < 15; i++) {
        printf("print an integer:\n");
        scanf("%d", &userInput);
        if (userInput % 2 == 1 && lastInput % 2 == 0)
            count ++;
        lastInput = userInput;
    }
    printf("You entered an odd number immediately followed by an even number %d many times", count);
    return 0;
}