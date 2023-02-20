#include <stdio.h>

int main(int argc, char const *argv[])
{
    char word[] = "word";
    char word_2[] = { '\t', ' ',  'w', 'o', 'r', 'd', '\n', '2', '\0'};
    char word_3[5] = "word3";

    printf("char[]: %s bytes: %lu\n", word, sizeof(word));
    printf("char[]: %s bytes: %lu\n", word_2, sizeof(word_2));
    printf("char[]: %s bytes: %lu\n", word_3, sizeof(word_3));

    printf("char[]: %c %c %c %c %c \n", word[0], word[1], word[2], word[3]);

    int n[2] = { 0, 1 };

    printf("int[]: %d, %d bytes: %lu\n", n[0], n[1], sizeof(n));
    n[0] = 4;
    n[1] = 4;
    printf("int[]: %d, %d bytes: %lu\n", n[0], n[1], sizeof(n));

    // TRY FOR FLOAT, DOUBLE

    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-3
    gcc main.c
    ./a.out
*/