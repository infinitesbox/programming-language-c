#include "features.h"

int main(int argc, char const *argv[])
{

    features_show_info();

    int result = features_add(12, 10);
    features_show_result(result);

    result = features_sub(40, 10);
    features_show_result(result);

    result = features_mult(50, 10);
    features_show_result(result);

    result = features_div(220, 10);
    features_show_result(result);

    /*
        JUST RUN THE COMMANDS
    */

    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-9/level-9.1
    gcc -c main.c features.c
*/