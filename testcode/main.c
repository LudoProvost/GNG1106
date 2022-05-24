#include <stdio.h>

int max(int a, int b) {
    int larger = a;
    if (b > larger)
        larger = b;
    return larger;
}

int main() {
    int x,y;
    printf("enter 2 integers\n");
    scanf("%d%d", &x, &y);
    printf("the larger value in (x, y) is %d\n", max(x, y));
    return 0;
}
