#include <stdio.h>

struct Point2D
{
    char letter; // 4 bytes
    int x; // 4 bytes
    int y; // 4 bytes
};

int main(int argc, char const *argv[])
{
    struct Point2D pointA;
    pointA.letter = 'A';
    pointA.x = 10;
    pointA.y = 20;
    

    printf("Point2D %lu bytes.\n", sizeof(struct Point2D));
    printf("Point %c: p.x = %d and p.y = %d.\n", pointA.letter, pointA.x, pointA.y);

    struct Point2D pointB = { 'B', 11, 21 };

    printf("Point2D %lu bytes.\n", sizeof(struct Point2D));
    printf("Point %c: p.x = %d and p.y = %d.\n", pointB.letter, pointB.x, pointB.y);


    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-12/level-12.1
    gcc main.c
    ./a.out
*/