#include <stdio.h>

int main(int argc, char const *argv[])
{
    char word[] = "word";
    int a = 10;
    int b = 3;
    int x;

    x = a + b;
    printf("a + b: %d\n", x);

    x = a - b;
    printf("a - b: %d\n", x);

    x = a * b;
    printf("a x b: %d\n", x);

    x = a / b;
    printf("a / b: %d\n", x);

    x = a % b;
    printf("a %% b: %d\n", x);

    x = a;
    x += b; 
    printf("a b: %d\n", x);

    x = a;
    b++;
    a += b; 
    printf("a b: %d\n", x);
  
    x = a;
    b--;
    a += b; 
    printf("a b: %d\n", x);

    x = word[0];
    x += 10;
    word[1] -= 10; 
    printf("word: %s\n", word);

    printf("x: %d\n", (a + b));

    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-4/level-4.1
    gcc main.c
    ./a.out
*/