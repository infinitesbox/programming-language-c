#include <stdio.h>

void swap(int a, int b)
{
    int tmp;

    tmp = a;
    a = b;
    b = tmp;
    
    printf("Swap Inside Function: a = %d and b = %d.\n", a, b);
}

void swap_pointer(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 12;

    swap(a, b);
    printf("Only copy in paramaters.\nNothing Happened.\n");
    printf("Swap: a = %d and b = %d.\n", a, b);

    printf("\n\n\nLook carefully to understand why Pointer are Important!\n\n\n");

    swap_pointer(&a, &b);
    printf("Not copy but the Memory(RAM) Address in paramaters.\n");
    printf("Swap: a = %d and b = %d.\n", a, b);

    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-10/level-10.4
    gcc main.c
    ./a.out
*/