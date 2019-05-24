#include "libft.h"

void				ft_striteri(char *str, void (*f)(unsigned int, char *))
{
    unsigned int    i;

    i = 0;
    if (str != NULL)
    {
        while (*str != '\0')
        {
            (*f)(i, str);
            str++;
            i++;
        }
    }   
}