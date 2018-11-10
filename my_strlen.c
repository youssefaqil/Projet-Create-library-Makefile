/*
** ETNA PROJECT, 20/10/2018 by aqil_y
** Day03
** File description:
**      my_strlen
*/
#include<stdio.h>
int my_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        {
            i++;
        }
    return (i);
}
