/*
** ETNA PROJECT, 29/10/2018 by aqil_y
** Day04
** File description:
**      my_strcat
*/
#include<stdio.h>

int my_strlen(char *str);

char *my_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    j = 0;
    i = my_strlen(dest);
    while (src[j] != '\0')
        {
            dest[i] = src[j];
            j++;
            i++;
        }
    dest[i] = '\0';
    return (dest);
}
int main(void)
{
        char ar[] = "aqilyousse";
        char fr[] = "simo";

        printf("%s\n", my_strcat(ar,fr));
        return 0;
}
