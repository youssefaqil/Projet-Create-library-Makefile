/*
** ETNA PROJECT, 21/10/2018 by aqil_y
** Day05
** File description:
**      my_putnbr
*/

#include<unistd.h>
void my_putchar(char c);
void my_putnbr(int n)
{
    int i = 0;
    while (n[i] != '0')
        {
            my_putchar(n[i]);
            i++;
        }
}

int main(void)
{
    //int n[] = 5116;
    // my_putnbr(-600000);
    // my_putchar('\n');
    my_putnbr(5116);
    //my_putchar('\n');
    // my_putnbr(0);
    my_putchar('\n');
    return 0;
}
