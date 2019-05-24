#include "libft.h"

void    *ft_memalloc(size_t size)
{
    char    *mem;
    int     i;
    
    i = 0;
    mem = (void *)malloc(size * sizeof(size_t));
    if (mem == NULL)
        return (NULL);
    else
    {
        while (mem[i] != '\0')
        {
            mem[i] = 0;
            i++;
        }
    }
    return (mem);
}