#include <stdio.h>


int main() {
    int percentagegrade;
    printf("Enter your grade (in %%):\n");
    scanf("%d", &percentagegrade);
    if (percentagegrade<=100 && percentagegrade>=90)
        printf("A+");
    else if (percentagegrade>=85 && percentagegrade <= 89)
        printf("A");
    else if (percentagegrade>=80 && percentagegrade <= 84)
        printf("A-");
    else if (percentagegrade>=75 && percentagegrade <= 79)
        printf("B+");
    else if (percentagegrade>=70 && percentagegrade <= 74)
        printf("B");
    else if (percentagegrade>=65 && percentagegrade <= 69)
        printf("C+");
    else if (percentagegrade>=60 && percentagegrade <= 64)
        printf("C");
    else if (percentagegrade>=55 && percentagegrade <= 59)
        printf("D+");
    else if (percentagegrade>=50 && percentagegrade <= 54)
        printf("D");
    else if (percentagegrade>=40 && percentagegrade <= 49)
        printf("E");
    else if (percentagegrade>=0 && percentagegrade <= 39)
        printf("F");
    else
        printf("Wrong input");
    return 0;
}
