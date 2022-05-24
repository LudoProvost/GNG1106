#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
}COORDINATE;

typedef struct {
    COORDINATE vertice[3];
    double perimeter;
}TRIANGLE;

double getPerimeter(TRIANGLE *pTriangle);
int getIndexOfLargestTriangleInArray(TRIANGLE *pTriangle);
void printTriangle(TRIANGLE *pTriangle);
TRIANGLE getTriangleFromUser();

int main()  {
    TRIANGLE userTriangles[4];
    int i, numTriangles = 4;
    for (i = 0; i < numTriangles; i++) {
        printf("Values for triangle #%d:\n", i + 1);
        userTriangles[i] = getTriangleFromUser();
    }
    printTriangle(&userTriangles[getIndexOfLargestTriangleInArray(userTriangles)]);
    return 0;
}

double getPerimeter(TRIANGLE *pTriangle) {
    int i;
    double perimeter = 0;
    for (i = 0; i < 3; i++) {
        perimeter += sqrt(pow((pTriangle->vertice[(i + 1)%3].x - pTriangle->vertice[i].x), 2) +
                          pow((pTriangle->vertice[(i + 1)%3].y - pTriangle->vertice[i].y), 2));
    }
    return perimeter;
}

int getIndexOfLargestTriangleInArray(TRIANGLE *pTriangle) {
    int i, biggestIndex = 0;
    for (i = 0; i < 4; i++) {
        if (pTriangle[i].perimeter > pTriangle[biggestIndex].perimeter) {
            biggestIndex = i;
        }
    }
    return biggestIndex;
}

void printTriangle(TRIANGLE *pTriangle) {
    int i;
    for (i = 0; i < 3; i++) {
        printf("Vertice #%d has position x: %lf and y: %lf\n", i + 1, pTriangle->vertice[i].x, pTriangle->vertice[i].y);
    }
    printf("the perimeter of this triangle is: %lf", pTriangle->perimeter);
}

TRIANGLE getTriangleFromUser() {
    TRIANGLE triangle;
    int i;
    for (i = 0; i < 3; i++) {
        printf("enter the x coordinate for the #%d vertice:\n", i + 1);
        scanf("%lf", &(triangle.vertice[i].x));
        printf("enter the y coordinate for the #%d vertice:\n", i + 1);
        scanf("%lf", &(triangle.vertice[i].y));
    }
    triangle.perimeter = getPerimeter(&triangle);
    return triangle;
}