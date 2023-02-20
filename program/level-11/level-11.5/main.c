#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int size = 10;
    int index;
    int *numbers_1 = NULL;
    int *numbers_2 = NULL;
    int *numbers_3 = NULL;
    int **grid = NULL;

    numbers_1 = malloc( sizeof(int) *  size);
    for(index = 0; index < size; index++)
        numbers_1[index] = index + 1;

    numbers_2 = malloc( sizeof(int) *  size);
    for(index = 0; index < size; index++)
        numbers_2[index] = index + 11;

    numbers_3 = malloc( sizeof(int) *  size);
    for(index = 0; index < size; index++)
        numbers_3[index] = index + 21;
   

    grid = malloc( sizeof(int*) *  3);
    grid[0] = numbers_1;
    grid[1] = numbers_2;
    grid[2] = numbers_3;

    // print grid[][], 2D Grid
    int row;
    int column;
    for(row = 0; row < 3; row++)
    {
        for(column = 0; column < 10; column++)
            printf("[%d]", grid[row][column]);

        printf("\n");
    }

    // free all sub row

    free(numbers_3);
    numbers_3 = NULL;

    free(numbers_2);
    numbers_2 = NULL;

    free(numbers_2);
    numbers_1 = NULL;

    // free grid

    free(grid);
    grid = NULL;

    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-11/level-11.4
    gcc main.c
    ./a.out
*/