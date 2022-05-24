#include <stdio.h>

int main() {
    int firstInteger;
    int secondInteger;
    printf("enter 2 integers\n");
    scanf("%d%d", &firstInteger, &secondInteger);
    if (firstInteger == secondInteger)
        printf("wrong input");
    else if (firstInteger < secondInteger)
        printf("%d", firstInteger);
    else
        printf("%d", secondInteger);
    return 0;

}
