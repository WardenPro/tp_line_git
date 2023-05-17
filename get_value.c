#include <stdio.h>
int get_value(int a, int b, float ratio)
{
    float tmp;
    int value;
    tmp = (ratio * (b - a) + a);
    value = tmp;
    return value;
}
