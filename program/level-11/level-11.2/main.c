#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numbers[3] = { 1, 2, 3 };
    printf("Numbers: [%d] [%d] [%d]\n", numbers[0], numbers[1], numbers[2]);

    printf("Numbers Address: [%p] [%p] [%p]\n", &numbers[0], &numbers[1], &numbers[2]);

    printf("Numbers Address: [%p] [%p] [%p]\n", numbers, (numbers + 1), (numbers + 2));

    printf("Numbers: [%d] [%d] [%d]\n", *numbers, *(numbers + 1), *(numbers + 2));

    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-11/level-11.2
    gcc main.c
    ./a.out
*/