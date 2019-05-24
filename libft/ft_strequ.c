#include "libft.h"

int ft_strequ(char const *str1, char const *str2)
{
    int i;

    i = 0;
    if (str1 == NULL || str2 == NULL)
        return (0);
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
            return (0);
        i++;
    }
    return (1);
}