/*
 * E89 Pedagogical & Technical Lab
 * project:     tp_line_git/
 * created on:  Wed May 17 19:47:34 2023
 * 1st author:  user
 * description: get_ratio.c
*/

float get_ratio(int a, int b, int x)
{
    float ratio;
    float i;

    i = (b - a);
    ratio = (x - a) / i;
    return ratio;
}
