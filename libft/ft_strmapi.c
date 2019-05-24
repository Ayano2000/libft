#include "libft.h"

char				*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
    int             i;
    unsigned int    j;
    char            *nstr;

    i = 0;
    j = 0;
    i = ft_strlen((char *)str);
    if (str == NULL)
        return (NULL);
    if (!(nstr = (char *)malloc(sizeof(char) * (i + 1))))
        return (NULL);
    while (str[j] != '\0')
    {
        nstr[j] = (f)(j, str[j]);
        j++;
    }
    nstr[j] = '\0';
    return (nstr);
}