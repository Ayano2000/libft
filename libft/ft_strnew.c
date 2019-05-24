#include "libft.h"

char    *ft_strnew(size_t size)
{
    char    *str;
    int     i;

    i = 0;
    str = (char *)malloc(sizeof(char) * (size + 1));
    if (str == NULL)
        return (NULL);
    else
    {
        while (str[i] != '\0')
        {
            str[i] = '\0';
            i++;
        }
        str[i] = '\0';
    }
    return (str);
}