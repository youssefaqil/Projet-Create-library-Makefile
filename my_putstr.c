/*
** ETNA PROJECT, 20/10/2018 by aqil_y
** Day03
** File description:
**      my_putstr
*/

#include<unistd.h>

void my_putchar(char c);
void my_putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        {
            my_putchar(str[i]);
            i++;
        }
}
