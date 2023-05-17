/*
 * E89 Pedagogical & Technical Lab
 * project:     tp_line_git/
 * created on:  Wed May 17 19:47:34 2023
 * 1st author:  user
 * description: get_value.c
*/

#include <stdio.h>
int get_value(int a, int b, float ratio)
{
    float tmp;
    int value;
    tmp = (ratio * (b - a) + a);
    value = tmp;
    return value;
}
