#include "libft.h"

char    *ft_strchr(const char *str, int to_find)
{
    size_t i;

    i = 0;
    while (str[i] != to_find && str[i] != '\0')
            i++;
    if (str[i] == '\0')
        return (NULL);
    else
        return (str[i + 1]);
}