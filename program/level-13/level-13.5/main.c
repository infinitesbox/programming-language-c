#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *file = NULL;
    file = fopen("jours.fr", "r+");

    char day[255];
    while(fscanf(file, "%s", day) == 1)
        printf("%s\n", day);

    fclose(file);

    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-13/level-13.5
    gcc main.c
    ./a.out
*/