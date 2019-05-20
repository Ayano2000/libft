#include "libft.h"

 char   *strrchr(const char *str, int to_find)
 {
     size_t i;

     i = ft_strlen(str);
     while(str[i] != to_find && 0 != i)
        i--;
    if (0 == i)
        return (NULL);
    else
        return (str);
 }