#include <stdio.h>

int main() {
    int integer1;
    int integer2;
    // enlever le =9
    int integer3=9;
    printf("Enter 3 integers:\n");
    scanf("%d%i%d", &integer1, &integer2, &integer3);
    if (integer1==integer2 || integer1==integer3 || integer2==integer3)
        printf("wrong input\n");
    else if (integer1>integer2 && integer1>integer3)
        printf("%d", integer1);
    else if (integer2>integer3)
        printf("%d", integer2);
    else
        printf("%d", integer3);
    return 0;
}