#include <stdio.h>


int jack(int a, int b) {
    int c;
    c = a*2+b;
    return c;
}

int main() {
    int i, a, out = 1;
    for (i = 0; i < 3; i++) {
        scanf("%d", &a);
        out = jack(out,a);
    } printf("%d\n", out);
    return 0;
}