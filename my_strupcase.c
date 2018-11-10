/*
** ETNA PROJECT, 31/10/2018 by aqil_y
** Day03
** File description:
**      my_strupcase
*/
char *my_strlowcase(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
        {
            if(str[i] >= 'a' && str[i] <= 'z')
                {
                    str[i] = str[i] - 32 ;
                }
            i = i + 1;
        }
    return (str);
}
