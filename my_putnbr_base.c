/*
** ETNA PROJECT, 31/10/2018 by aqil_y
** Day05
** File description:
**      my_putnbr_base
*/

#include<stdio.h>
int     my_putnbr_base(int nbr, char *base)
{
    inti;
    intsize;
    intnb;

    i = 0;
    if (nbr < 0)
        {
            nbr = - nbr;
            i += my_putchar('-');
        }
    size = my_strlen(base);
    if (nbr > 0)
        {
            nb = nbr;
            nbr /= size;
            i += my_putnbr_base(nbr, base);
            i += my_putchar(base[nb % size]);
        }
    return (i);
}
