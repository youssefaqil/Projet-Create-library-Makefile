/*
** ETNA PROJECT, 21/10/2018 by aqil_y
** Day04
** File description:
**      my_strcpy
*/

#include<unistd.h>
#include<stdio.h>
char *my_strcpy(char *dest, char *src)
{
    int i = 0;
    for(i = 0; src[i] != '\0'; i++)
        {
            dest[i] = src[i];
        }
    dest[i] = src[i];
    
    return (dest);
} 
