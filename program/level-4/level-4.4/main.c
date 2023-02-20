#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 3;
    int x;

    x = a == b ? 44 : 222;
    printf("x: %d\n", x);

    x = a == b 
        ? (a == 11 ? 2 : 10)
        : 222;
    printf("x: %d\n", x);

    x = a == b 
        ? (a == 3 ? 0 : 10) 
        : (a == 11 ? 2 : 10);
    printf("x: %d\n", x);

    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-4/level-4.4
    gcc main.c
    ./a.out
*/