#include <stdio.h>

int main(int argc, char const *argv[])
{
    int level;

    level = 1;
    // try to change "level" value
    // ex.: level = 2
  
    for (level = 0; level < 10; level++)
    {
        if(level == 2 || level == 4)
            continue;

        printf("For: Your Level: %d\n", level);

        if(level == 6)
            break;
    }

    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-5/level-5.4
    gcc main.c
    ./a.out
*/