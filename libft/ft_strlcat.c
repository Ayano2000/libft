#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t c;

    i = 0;
    c = 0;
    while (dst[c] != '\0' && dst[c] < dstsize)
        c++;
    while (src[i] != '\0' && src[c + i] < dstsize - 1)
    {
        dst[c + i] = src[i];
        i++;
    }
    if (c + i < dstsize)
        dst[c + i] = '\0';
    return (ft_strlen(dst));
}