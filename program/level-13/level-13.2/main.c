#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *file = NULL;
    file = fopen("numbers.txt", "r+");

    char c;
    while((c = fgetc(file)) != EOF)
    {
        printf("%c", c);
    }

    fclose(file);

    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-13/level-13.2
    gcc main.c
    ./a.out
*/