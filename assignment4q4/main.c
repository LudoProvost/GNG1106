#include <stdio.h>

int main() {
    int n;
    float userInput, answer = 1, cos = 1;
    printf("Enter the value for x:\n");
    scanf("%f",&userInput);
    userInput = userInput * 3.14159 / 180;
    for(n = 1; n <= 1000; n++) {
        cos = cos * (-1) * userInput * userInput / (2 * n * (2 * n - 1));
        answer = answer + cos;
    }
    printf(" The cosine value of the angle you entered was %f", answer);
    return 0;
}