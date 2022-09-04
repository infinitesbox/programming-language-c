#include <stdio.h>

struct Point2D
{
    char letter;
    int x;
    int y;
};
typedef struct Point2D Point2D; 

int main(int argc, char const *argv[])
{
    Point2D pointA;
    pointA.letter = 'A';
    pointA.x = 10;
    pointA.y = 20;

    printf("Point %c: p.x = %d and p.y = %d.\n", pointA.letter, pointA.x, pointA.y);


    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-12/level-12.2
    gcc main.c
    ./a.out
*/