#include "libft.h"

void    ft_strdel(char **stf)
{
    if (stf != NULL)
    {
        free(*stf);
        *stf = NULL;
    }
}