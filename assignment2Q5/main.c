#include <stdio.h>


int main() {
    float side1;
    float side2;
    float side3;
    printf("Enter three positive values:\n");
    scanf("%f%f%f", &side1, &side2, &side3);
    if (side1 <= 0 || side2 <= 0 || side3 <= 0)
        printf("Wrong input\n");
    else if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2)
        printf("The values you have entered can be the lengths of three side of a triangle\n");
    else
        printf("The values you have entered can not be the lengths of three side of a triangle\n");
    return 0;
}
