#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 3;
    int x;

    x = a == 10 && b == 2;
    printf("x: %d\n", x);

    x = a == 10 || b == 2;
    printf("x: %d\n", x);

    x = !(a == 3);
    printf("x: %d\n", x);

    x = !(  (a == 10 && b == 2)  &&  (a == 10 || b == 2) );
    printf("x: %d\n", x);

    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-4/level-4.3
    gcc main.c
    ./a.out
*/