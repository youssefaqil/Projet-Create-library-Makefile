/*
** ETNA PROJECT, 29/10/2018 by aqil_y
** Day04
** File description:
**      my_strncat
*/
int my_strlen(char *str);

char *my_strncat(char *dest, char *src, int nb)
{
    int i;
    int j;

    j = 0;
    i = my_strlen(dest);
    while (src[j] != '\0' && j < nb)
        dest[i++] = src[j++];
    dest[i] = '\0';
    return (dest);
}
