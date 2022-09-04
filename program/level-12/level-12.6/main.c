#include <stdio.h>
#include <stdlib.h>

enum Plan
{
    PLAN_2D = 1,
    PLAN_3D = 2,
    PLAN_XY = 3,
    PLAN_XYZ = 4,
    PLAN_TIME = 5,
    PLAN_DIMENSION = 6 
};
typedef enum Plan Plan; 

int main(int argc, char const *argv[])
{
    Plan plan;
    plan = PLAN_2D;

    printf("Plan %lu bytes.\n", sizeof(Plan));
    printf("Plan %d.\n", plan);

    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-12/level-12.6
    gcc main.c
    ./a.out
*/