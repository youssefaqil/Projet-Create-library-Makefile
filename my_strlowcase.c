/*
** ETNA PROJECT, 31/10/2018 by aqil_y
** my_strlowcase
** File description:
**      Day03
*/
char *my_strlowcase(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
                {
                    str[i] = str[i] + 32 ;
                }
            i = i + 1;
        }
    return (str);
}
