#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    char *s1;
    char c1;

    i = 0;
    c1 = (char) c;
    s1 = (char *) s;
    while (i < n && s1[i] != '\0')
        i++;
    if (s1[i] == '\0')
        return (NULL);
    else
        return ((void *) &s[i]);
}