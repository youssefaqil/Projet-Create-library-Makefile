/*
** ETNA PROJECT, 21/10/2018 by aqil_y
** Day03
** File description:
**      my_nbrlen
*/

#include<stdio.h>
int my_nbrlen(int n)
{
    int nbrlen = 0;
    if (n == 0)
        return 1;
    if (n < 0)
        {
            n = n *(-1);
            nbrlen++;
        }
    while(n > 0 )
        {
            n /= 10;
            nbrlen++;
        }
    return nbrlen;
    
}


int main(void)
{
    printf("%d\n", my_nbrlen(-542));
    printf("%d\n", my_nbrlen(0));
    printf("%d\n", my_nbrlen(5116));
    return 0;
}
