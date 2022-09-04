#include <stdio.h>
#include <stdlib.h>

union Point2D
{
    int xi; // 4 bytes
    float xf; // 4 bytes
    double xd; // 8 bytes
};
typedef union Point2D Point2D; 

int main(int argc, char const *argv[])
{
    Point2D *pointA = NULL;
    pointA = malloc( sizeof(Point2D) );
    pointA->xi = 0;

    printf("Point2D %lu bytes.\n", sizeof(pointA));
    printf("Point %d.\n", pointA->xi);


    Point2D *pointB = NULL;
    pointB = malloc( sizeof(Point2D) );
    pointB->xd = 12.5;

    printf("Point2D %lu bytes.\n", sizeof(pointB));
    printf("Point %lf.\n", pointB->xd);


    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-12/level-12.5
    gcc main.c
    ./a.out
*/