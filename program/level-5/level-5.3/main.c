#include <stdio.h>

int main(int argc, char const *argv[])
{
    int level;

    level = 1;
    // try to change "level" value
    // ex.: level = 2
    
    while(level < 10)
    {
        printf("While: Your Level: %d\n", level);
        level++;
    }

    printf("\n");

    level = 20;

    do
    {
        printf("Do while: Your Level: %d\n", level);
        level--;
    }
    while (level > 0 && level < 20);

    printf("\n");

    for (level = 0; level < 10; level = level + 2)
    {
        printf("For: Your Level: %d\n", level);
        // ...
    }

    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-5/level-5.3
    gcc main.c
    ./a.out
*/