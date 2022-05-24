#include <stdio.h>

typedef struct {
    char *string1;
    char string2[6];
}STRING_PAIR;

void printStringPair(STRING_PAIR x) {
    printf("(%s, %s)", x.string1, x.string2);
}

int main() {
    char x[6]="big";
    STRING_PAIR A={x, "hit"};
    STRING_PAIR B;
    B=A;
    A.string1[0]='p';
    A.string2[1]='o';
    printStringPair(B);
    return 0;
}
