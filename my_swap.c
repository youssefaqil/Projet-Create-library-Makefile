*/*
** ETNA PROJECT, 20/10/2018 by aqil_y
** my_swap
** File description:
**      my_swap
*/
#include<unistd.h>

void my_swap(int *a, int *b)
{
    int swap=0;
    swap=*a;
    *a=*b;
    *b=swap;
}
