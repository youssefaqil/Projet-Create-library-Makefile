/*
** ETNA PROJECT, 21/10/2018 by aqil_y
** Day03
** File description:
**      my_strcmp
*/
#include<unistd.h>
#include<stdio.h>
int my_strcmp(char *s1, char *s2)
{
    int i = 0;
    while(s1[i] != '\0')
        {
            if (*s2 == '\0'){
                return 1;
            }else if (*s1 > *s2){
                return 1;
            }else if (*s1 < *s2){
                return -1;
            }else{
                return 0;
            }
        }
    if (*s2 != '\0')
        return -1;
    return 0;
}
