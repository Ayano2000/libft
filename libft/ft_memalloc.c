#include "libft.h"

void    *ft_memalloc(size_t size)
{
    char    *mem;
    
    mem = (void *)malloc(size * sizeof(size_t));
    if (mem == NULL)
        return (NULL);
    else
    {
        ft_bzero(mem, 0);
    }
    return (mem);
}