/*
** ETNA PROJECT, 29/10/2018 by aqil_y
** Day06
** File description:
**      my_strdup
*/

#include<stdio.h>
#include<stdlib.h>

char *my_strdup(char *str)
{
    int i = 0;
    char *tab = NULL;
    while(str[i] != '\0')
        {
            i++;
        }
    tab = malloc(sizeof(*tab) *i);
    if(tab == NULL)
        {
            return (NULL);
        }else{
        for(i = 0; str[i] != '\0'; i++)
            {
                tab[i] = str[i];
            }
    }
    return (tab);
}
