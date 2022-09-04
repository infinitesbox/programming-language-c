#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 3;
    int x;

    x = a << 1;
    printf("x: %d\n", x);

    x = a >> 1;
    printf("x: %d\n", x);

    x = a & b;
    printf("x: %d\n", x);

    x = a | b;
    printf("x: %d\n", x);

    x = a ^ b;
    printf("x: %d\n", x);


    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-4/level-4.5
    gcc main.c
    ./a.out
*/