#include "libft.h"

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    size_t  i;
    unsigned char *str1;
    unsigned char *str2;

    i = 0;
    str1 = (unsigned char *)dst;
    str2 = (unsigned char *)src;
    while (str2[i] != '\0' && str2[i] < n && str2[i] != c)
    {
        str1[i] = str2[i];
        i++;
    }
    if (str2[i] == c)
        return (dst);
    else
        return (NULL);
}