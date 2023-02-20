#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *file = NULL;
    file = fopen("numbers.txt", "r+");

    if(file == NULL)
        printf("Cannot Open File!\n");
    
    if(file == NULL)
        fclose(file);

    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-13/level-13.1
    gcc main.c
    ./a.out
*/