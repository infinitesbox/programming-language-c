#include <stdio.h>

/*
    AVOID THIS AS MUSH AS POSSIBLE !
*/

#define HELLO_WORD "\n\nHello World\n\n"
#define SUM(a, b) ( a + b )

int main(int argc, char const *argv[])
{
    printf(HELLO_WORD);
    printf("a + b = %d\n", SUM(12, 10));

    return 0;   
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-7/level-7.2
    gcc main.c
    ./a.out
*/