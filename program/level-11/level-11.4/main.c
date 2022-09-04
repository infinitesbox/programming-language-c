#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int size = 10;
    int *numbers = malloc( sizeof(int) *  size);

    int index;
    for(index = 0; index < size; index++)
    {
        numbers[index] = index + 1;
        printf("[%d]", numbers[index]);
    }
    printf("\n");

    int new_size = size + 10;
    numbers = realloc(numbers, new_size);
    for(index = 10; index < new_size; index++)
    {
        numbers[index] = index + 1;
        printf("[%d]", numbers[index]);
    }
    printf("\n");

    free(numbers);
    numbers = NULL;

    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-11/level-11.4
    gcc main.c
    ./a.out
*/