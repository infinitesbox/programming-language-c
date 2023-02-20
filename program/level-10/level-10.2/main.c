#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    int *pa = &a; 

    printf("a = %d\n", a);
    printf("address (RAM: Memory): %p\n", pa);

    printf("the value of a from pa.\n");
    printf("a = %d\n", *pa);

    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-10/level-10.2
    gcc main.c
    ./a.out
*/