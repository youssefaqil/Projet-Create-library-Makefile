/*
** ETNA PROJECT, 21/10/2018 by aqil_y
** Day04
** File description:
**      my_strncmp
*/

#include<stdio.h>

int my_strncmp(char *s1, char *s2, int n)
{
    int i;
    int j;
    int som;
    for (i = 0; i < n && s1[i] != '\0'; i++){
        som += s1[i];
    }
    for (j = 0; j < n && s2[j] != '\0'; j++){
        som -= s2[j];
    }
    if (som > 0)
        {
            return 1;
        }else if (som < 0){
        return -1;
    }else{
        return 0;
    }
}
