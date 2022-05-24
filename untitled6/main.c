#include <stdio.h>

typedef struct {
    int a;
    int *b;
}widget;

int main() {
    widget X,Y;
    int u, v, w, final;
        X.b = &u;
    printf("enter 4 integers\n");
    scanf("%d%d%d%d", &X.a, &u, &v, &w);
    Y=X;
    Y.a = Y.a + v;
    *Y.b = *Y.b + w;
    final = *X.b - X.a;
    printf("%d\n", final);
    return 0;
}
