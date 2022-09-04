#include <stdio.h>

void swap_pointer(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 12;
    int *pa = &a;
    int *pb = &b;
    
    printf("a = %d and b = %d\n", a, b);
    printf("address a = %p and adress b = %p\n", &a, &b);

    printf("\n\n");

    printf("from pa: a = %d and from pb: b = %d\n", *pa, *pb);
    printf("from pa: address a = %p and from pb: adress b = %p\n", pa, pb);

    printf("\n\n");


    int *ppa = pa;
    int *ppb = pb;

    printf("from ppa: a = %d and from ppb: b = %d\n", *ppa, *ppb);
    printf("from ppa: address a = %p and from ppb: adress b = %p\n", ppa, ppb);

    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-10/level-10.5
    gcc main.c
    ./a.out
*/