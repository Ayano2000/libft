#include "libft.h"

void    ft_strclr(char *str)
{
    size_t i;

    i = 0;
    while (str != NULL && str[i] != '\0')
    {
        str[i] = '\0';
        i++;    
    }
}