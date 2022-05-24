#include <stdio.h>

int main()
{
    int integer1;
    int integer2;
    int product;
    printf("input the first integer:\n");
    scanf("%d", &integer1);
    printf("input the second integer:\n");
    scanf("%d", &integer2);
    product = integer1 * integer2;
    printf("%d x %d = %d", integer1, integer2, product);
    return 0;
}
