#include <stdio.h>

int main(int argc, char const *argv[])
{
    char variable_c = 'a'; // TRY ASCII DEC NUMBER EX.: variable_c = 65
    int __variable_n = -2;
    unsigned int np = -80; 
    float VAR_D = 1.2;
    double VAR_2_DOUBLE = -1.3;

    printf("char: %c bytes: %lu\n", variable_c, sizeof(variable_c));
    printf("char: %d bytes: %lu\n", __variable_n, sizeof(__variable_n));
    printf("char: %d bytes: %lu\n", np, sizeof(np));
    printf("char: %f bytes: %lu\n", VAR_D, sizeof(VAR_D));
    printf("char: %0.2f bytes: %lu\n", VAR_2_DOUBLE, sizeof(VAR_2_DOUBLE));

    // write in Terminal "man ascii"

    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-2
    gcc main.c
    ./a.out
*/