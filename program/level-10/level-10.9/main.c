#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    int *pa = &a;
    int **ppa = &pa;

    printf("a = %d\n", a);
    printf("address (RAM: Memory) 'a': %p\n", pa);
    
    printf("pa = %p\n", pa);
    printf("address (RAM: Memory) 'pa': %p\n", ppa);
    printf("'pa' value from 'ppa': %p\n", *ppa);

    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-10/level-10.9
    gcc main.c
    ./a.out
*/