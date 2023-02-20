#include <stdio.h>

#define SIZE 100

void levels_fill_show(int levels[], int size)
{
    int index;

    for(index = 0; index < size; index++)
    {
        levels[index] = index + 1; 
        printf("Level: %d\n", levels[index]);
    }
}

int main(int argc, char const *argv[])
{
    int levels[SIZE] = { 0 };

    printf("Size: %d\n", SIZE);

    levels_fill_show(levels, SIZE);

    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-7/level-7.1
    gcc main.c
    ./a.out
*/