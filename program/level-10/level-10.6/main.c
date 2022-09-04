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
    
    // You can in this following way
    // you pas address to paramaters
    // with &
    // & means "I want the address of the variable"
    swap_pointer(&a, &b);
    printf("Not copy but the Memory(RAM) Address in paramaters.\n");
    printf("Swap: a = %d and b = %d.\n", a, b);

    // Or you can do in this following way
    // you can pass address to paramaters
    // with the pointer variable
    // the pointer variable (pa, pb), pointer variable contains address value"
    // rember pa = &a

    *pa = 22;
    *pb = 44; 

    swap_pointer(pa, pb);
    printf("Not copy but the Memory(RAM) Address in paramaters.\n");
    printf("Swap: a = %d and b = %d.\n", a, b);

    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-10/level-10.6
    gcc main.c
    ./a.out
*/