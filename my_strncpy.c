/*
** ETNA PROJECT, 21/10/2018 by aqil_y
** Day03
** File description:
**      my_strncpy
*/
char *my_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
        {
        dest[i] = src[i];
        }
   
        dest[i] = '\0';

    return dest;
}
