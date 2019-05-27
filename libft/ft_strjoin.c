#include "libft.h"

char    *ft_strjoin(char const *str1, char const *str2)
{
    size_t  len;
    int     i;
    int     j;
    char    *str3;

    len = (ft_strlen(str1)) + (ft_strlen(str2));
    i = 0;
    j = 0;
    if (!(str3 = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    while(str1[i] != '\0')
    {
        str3[i] = str1[i];
        i++;
    }
    while(str2[j] != '\0')
    {
        str3[i] = str2[j];
        i++;
        j++;
    }
    str3[i] = '\0';
    return (str3);
}