#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 12;
    int *pa = &a; 
    int *pb = NULL;
    pb = &b;

    printf("a = %d\n", a);
    printf("address (RAM: Memory): %p\n", pa);
    printf("b = %d\n", b);
    printf("address (RAM: Memory): %p\n", pb);

    // NOT SAME &a != &pa
    printf("address (RAM: Memory) 'a': %p\n", pa);
    printf("address (RAM: Memory) 'pa': %p\n", &pa);
    printf("address (RAM: Memory) 'b': %p\n", pb);
    printf("address (RAM: Memory) 'pb': %p\n", &pb);

    

    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-10/level-10.1
    gcc main.c
    ./a.out
*/