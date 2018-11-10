/*
** ETNA PROJECT, 21/10/2018 by aqil_y
** Day03
** File description:
**      my_strstr
*/

#include<stdio.h>
#include<unistd.>

char *my_strstr(char *str, char *to_find)
{
    int i = 0;
    char tofin;
    while(str != '\0')
        {
            tofind = to_find;
            if(str[i] == tofind[i]);
            {
                return &str[i];
            }
            i++;
        }
    return NULL;
}
