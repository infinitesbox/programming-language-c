#include <stdio.h>

int main(int argc, char const *argv[])
{
    int level;

    level = 1;
    // try to change "level" value
    // ex.: level = 1
    
    switch (level)
    {
        case 0:
            printf("Your Level: %d\n", level);
            printf("You need some Exp.\n");    
        break;

        case 1:
            printf("Your Level: %d\n", level);
            printf("You learn too fast ...\n");

        case 2:
            printf("Your Level: %d\n", level);
            printf("You learn too fast +2 ...\n");
            break;
        
        case 3:
            printf("Your Level: %d\n", level);
            printf("Know you understand you do not need to memorize all but understand how it works.\n");
        break;

        default:
            printf("You can read and write Code in C ...\n");
            printf("You can think logically and efficiently, solve problems ...\n");
            printf("You can write Algo with lot of abstraction ...\n");
            printf("You will get bored ...\n");
            printf("You can build your own Business ... why not Start with Games, ... C++ ,C#, Godot ...\n");
        break;
    }

    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-5/level-5.2
    gcc main.c
    ./a.out
*/