#include <stdio.h>


typedef struct
{
    double width;
    double length;
}RECTANGLE;

void swapLargestRectangleToArrayEnd(RECTANGLE *pCircles, int numCircles);

int main() {
    int i;
    RECTANGLE pCircles[4];
    for (i = 0; i < 4; i++) {
        printf("enter the x coordinate for the #%d circle:\n", i + 1);
        scanf("%lf", &(pCircles[i].width));
        printf("enter the y coordinate for the #%d circle:\n", i + 1);
        scanf("%lf", &(pCircles[i].length));
    }
    swapLargestRectangleToArrayEnd(pCircles, 4);
    for (i = 0; i < 4; i++) {
        printf("%lf\t%lf\n", pCircles[i].width, pCircles[i].length);
    }
}

void swapLargestRectangleToArrayEnd(RECTANGLE *pCircles, int numCircles) {
    int i, biggestIndex;
    RECTANGLE temp;
    biggestIndex = 0;
    for (i = 0; i < numCircles - 1; i++) {
        if (pCircles[i].width*pCircles[i].length > pCircles[biggestIndex].width*pCircles[biggestIndex].length) {
            biggestIndex = i;
        }
    }
    temp = pCircles[numCircles - 1];
    pCircles[numCircles - 1] = pCircles[biggestIndex];
    pCircles[biggestIndex] = temp;
}