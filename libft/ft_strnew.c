#include "libft.h"

char    *ft_strnew(size_t size)
{
    char    *str;

    str = (void *)malloc(size * sizeof(size_t));
    if (str == NULL)
        return (NULL);
    else
    {
        ft_bzero(str, size);
    }
    return (str);
}