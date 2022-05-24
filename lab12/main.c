#include <stdio.h>


typedef struct
{
    double width;
    double length;
}RECTANGLE;

int swapLargestRectangleToArrayEnd(RECTANGLE *pRectangles, int numRectangles);

int main() {
    RECTANGLE pCircles[4]={{1,1},{20,20},{200,200},{4000,4000}};
    printf("%d", swapLargestRectangleToArrayEnd(pCircles, 4));
}

int swapLargestRectangleToArrayEnd(RECTANGLE *pRectangles, int numRectangles) {
    int i, bool = 0;
    double area1, area2;
    for (i = 0; i < numRectangles - 1; i++) {
        area1 = pRectangles[i].width * pRectangles[i].length;
        area2 = pRectangles[i + 1].width * pRectangles[i + 1].length;
        if (-1 * (area1 - area2) < 10 && -1 * (area1 - area2) >= 0 || area1 - area2 < 10 && (area1 - area2) >= 0) {
            bool = 1;
        }
    }
    return bool;
}