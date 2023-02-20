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

    return 0;
}

/*
    RUN THE FOLLOWING COMMANDS:
    
    cd path/level-8/level-8.1
    gcc main.c features.c
    ./a.out
*/