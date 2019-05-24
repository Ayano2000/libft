#include "libft.h"

char    *ft_strsub(char const *str, unsigned int start, size_t len)
{
    size_t          slen;
    unsigned int    j;
    char            *substr;

    slen = ft_strlen(str);
    j = 0;
    if (str == NULL)
        return (NULL);
    if (start > slen)
        return (NULL);
    if (!(substr = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    while (j < len && str[start] != '\0')
    {
        substr[j] = str[start];
        j++;
        start++;
    }
    substr[j] = '\0';
    return (substr);
}