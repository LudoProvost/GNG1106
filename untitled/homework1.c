#include <stdio.h>

int max(int a, int b) {
    int larger = a;
    if (b > larger)
        larger = b;
    return larger;
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("the larger value of the two integers is: %d", max(x,y));
    return 0;
}

