#include "libft.h"

int     ft_intlen(int n)
{
    int     c;

    c = 0;
    if (n == INTMIN)
        return (11);
    if (n == 0)
        return (1);
    if (n < 0)
    {
        n = n * -1;
        c++;
    }    
    while (n >= 10)
    {
        c++;
        n = n / 10;
    }
    if (n >= 0)
        c++;
    return (c);
}