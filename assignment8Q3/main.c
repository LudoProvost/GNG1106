#include <stdio.h>
#include <math.h>
#define SORT_BY_RADIUS 1
#define SORT_BY_CENTER 2

// structure representing a point on a plane
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

void swapCircles(CIRCLE *pCircleA, CIRCLE *pCircleB);
int shouldCircleAPrecedeCircleB(CIRCLE A, CIRCLE B, int sortingMethod);
void sortCircles(CIRCLE *pCircles, int numCircles, int sortingMethod);
void printCircles(CIRCLE *pCircles, int numCircles);
void getCirclesFromUser(CIRCLE *pCircles, int numCircles);

int main()
{
    CIRCLE A[4];
    int sortingMethod;
    getCirclesFromUser(A, 4);
    printCircles(A, 4);
    printf("Do you want to sort the circles by radius or by center?\n");
    printf("\t %d for by radius\n", SORT_BY_RADIUS);
    printf("\t %d for by center\n", SORT_BY_CENTER);
    scanf("%d", &sortingMethod);
    sortCircles(A, 4, sortingMethod);
    printCircles(A, 4);
    return 0;
}


void swapCircles(CIRCLE *pCircleA, CIRCLE *pCircleB) {
    CIRCLE c;
    c= *pCircleA;
    *pCircleA = *pCircleB;
    *pCircleB = c;
}

/*******

The function below specifies the rule of sorting via the input parameter "sortingMethod",
which  takes value SORT_BY_RADIUS or SORT_BY_CENTER

*******/

int shouldCircleAPrecedeCircleB(CIRCLE A, CIRCLE B, int sortingMethod) {
    int booleanValue;
    if (sortingMethod - 1) {
        double distanceA = sqrt(pow(A.center.x, 2) + pow(A.center.y, 2));
        double distanceB = sqrt(pow(B.center.x, 2) + pow(B.center.y, 2));
        booleanValue = distanceA > distanceB;
    } else {
        booleanValue = A.radius > B.radius;
    }
    return booleanValue;
}

void sortCircles(CIRCLE *pCircles, int numCircles, int sortingMethod) {
    int i, j, biggestIndex;
    CIRCLE *A, *B;
    for (j = 0; j < numCircles; j++) {
        biggestIndex = 0;
        B = &pCircles[biggestIndex];
        for (i = 0; i < numCircles - j; i++) {
            A = &pCircles[i];
            if (shouldCircleAPrecedeCircleB(*A, *B, sortingMethod)) {
                biggestIndex = i;
                B = &pCircles[biggestIndex];
            }
        }
        swapCircles(B, &pCircles[numCircles - j - 1]);
    }
}

void printCircles(CIRCLE *pCircles, int numCircles) {
    int i;
    for (i = 0; i < numCircles; i++) {
        printf("The x coordinate for the #%d circle is %lf\n", i + 1, pCircles[i].center.x);
        printf("The y coordinate for the #%d circle is %lf\n", i + 1, pCircles[i].center.y);
        printf("The radius for the #%d circle is %lf\n", i + 1, pCircles[i].radius);
    }
}

void getCirclesFromUser(CIRCLE *pCircles, int numCircles) {
    int i;
    for (i = 0; i < numCircles; i++) {
        printf("enter the x coordinate for the #%d circle:\n", i + 1);
        scanf("%lf", &(pCircles[i].center.x));
        printf("enter the y coordinate for the #%d circle:\n", i + 1);
        scanf("%lf", &(pCircles[i].center.y));
        printf("enter the radius for the #%d circle:\n", i + 1);
        scanf("%lf", &(pCircles[i].radius));
    }
}