#include <stdio.h>

void message_show()
{
    printf("Hello World!\n");
}

void message_show_custom(char name[], int year, int month, int day)
{
    printf("Hello %s! %d-%d-%d\n", name, year, month, day);
}

int sum(int a, int b)
{
    int sum = a + b;
    return a;
}

int main(int argc, char const *argv[])
{
    char name[] = "Jane Doe";
    
    message_show();

    message_show_custom(name, 2022, 12, 31);

    int result = sum(12, 10);
    printf("a + b = %d\n", result);

    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-6/level-6.1
    gcc main.c
    ./a.out
*/