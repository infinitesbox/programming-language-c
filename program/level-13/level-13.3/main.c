#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *file = NULL;
    file = fopen("days.en", "r+");

    char line[255];
    while(fgets(line, 255, file) != NULL)
        printf("%s", line);
    
    fclose(file);

    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-13/level-13.3
    gcc main.c
    ./a.out
*/