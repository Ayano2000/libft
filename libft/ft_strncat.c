#include "libft.h"

char    *ft_strncat(char *str1, const char *str2, size_t n)
{
    size_t i;
    size_t c;

    c = 0;
    i = ft_strlen(str1);
    while (str2[c] < str2[n])
    {
        str1[i] = str2[c];
        i++;
        c++;
    }
    str1[i] = '\0';
}