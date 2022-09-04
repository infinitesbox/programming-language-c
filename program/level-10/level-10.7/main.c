#include <stdio.h>

void message_show()
{
    printf("Hello World!\n");
}

void swap_pointer(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(int argc, char const *argv[])
{
    void (*callback_1) () = message_show;
    printf("Address of Function 'message_show' : %p\n", callback_1);

    void (*callback_2) (int *, int *) = NULL;
    callback_2 = swap_pointer;
    printf("Address of Function 'swap_pointer' : %p\n", callback_2);

    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-10/level-10.7
    gcc main.c
    ./a.out
*/