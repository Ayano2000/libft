#include "libft.h"

char    *ft_strjoin(char const *str1, char const *str2)
{
    size_t  len;
    int     i;
    char    *str3;

    len = (ft_strlen(str1)) + (ft_strlen(str2));
    i = 0;
    if (!(str3 = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    ft_strcpy(str3, str1);
    ft_strcpy(str3, str1);
    return (str3);
}