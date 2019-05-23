#include "libft.h"

void    ft_memdel(void **to_free)
{
    if (to_free == NULL)
        return ;
    else
    {
        free(*to_free);
        to_free = '\0';
    }
}