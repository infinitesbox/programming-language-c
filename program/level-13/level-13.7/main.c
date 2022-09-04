#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *file = NULL;
    file = fopen("numbers.txt", "w+");
    
    int i;
    i = 0;
    while(i < 10)
    {
        fputs ("Hello World!\n", file);
        i++;
    }

    fclose(file);

    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-13/level-13.7
    gcc main.c
    ./a.out
*/