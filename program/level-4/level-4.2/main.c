#include <stdio.h>

int main(int argc, char const *argv[])
{
    char word[] = "word";
    int a = 10;
    int b = 3;
    int x;

    x = a == b;
    printf("a == b: %d\n", x);

    x = a != b;
    printf("a != b: %d\n", x);

    x = a > b;
    printf("a > b: %d\n", x);

    x = a < b;
    printf("a < b: %d\n", x);

    x = a <= b;
    printf("a <= b: %d\n", x);

    x = a >= b;
    printf("a >= b: %d\n", x);

    x = a >= b;
    printf("a >= b: %d\n", x);

    x = word[0] >= word[1];
    printf("word[0] >= word[1]: %d\n", x);

    printf("word[0] == word[1]: %d\n", word[0] == word[1]);

    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-4/level-4.2
    gcc main.c
    ./a.out
*/