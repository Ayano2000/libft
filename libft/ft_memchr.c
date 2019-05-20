#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *s1;
    unsigned char c1;

    i = 0;
    c1 = (unsigned char *) c;
    s1 = (unsigned char *) s;
    while (s1[i] < n && s1[i] != '\0')
        i++;
    if (s1[i] == '\0')
        return (NULL);
    else
        return ((char*) n);
}