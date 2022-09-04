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
        fprintf(file, "%d: Hello World!\n", i);
        i++;
    }

    fclose(file);

    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-13/level-13.8
    gcc main.c
    ./a.out
*/