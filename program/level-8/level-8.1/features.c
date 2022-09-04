#include "features.h"

#include <stdio.h>

int features_add(int a, int b)
{
    return a + b;
}

int features_sub(int a, int b)
{
    return a - b;
}

int features_mult(int a, int b)
{
    return a * b;
}

int features_div(int a, int b)
{
    return a / b;
}

void features_show_result(int result)
{
    printf("Result: %d\n", result);
}

void features_show_info()
{
    printf("Features! Better Organisation\n");
    printf("Features Total: %d\n", FEATURES_FUCTIONS_TOTAL);
}