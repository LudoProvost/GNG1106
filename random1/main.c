#include <stdio.h>
#include <math.h>

typedef struct
{
    double x;
    double y;
}COORDINATE;

// structure representing a circle on a plane
typedef struct
{
    COORDINATE center;
    double radius;
}CIRCLE;

int main() {
    int A[4]={2,3,4,1};
    int numCircles = 4;
    int i, j, k, y, biggestYet, temporary;
    for (j = 0; j < numCircles - 1; j++) {
        biggestYet = 0;
        for (i = 0; i < numCircles - j; i++) {
            if (A[i] > biggestYet) {
                k = i;
                biggestYet = A[i];
                }
            }
            temporary = A[numCircles - j - 1];
            A[numCircles - j - 1] = A[k];
            A[k] = temporary;
        }
    for (y = 0; y < numCircles; y++) {
        printf("%d\t", A[y]);
    }
}
