#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	while (src[len] != '\0')
	{
		dest = src;
		len++;
	}
	dest[len] = '\0';
}
