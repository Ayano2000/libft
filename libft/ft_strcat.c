#include "libft.h"

void	ft_strcat(char *restrict str1, const char *restrict str2)
{
	size_t i;
	size_t c;

	i = 0;
	c = 0;

	while (str1[i] != "\0")
	{
		i++;
	}
	while (str2[c] != "\0")
	{
		str1[i] = str2[c];
		c++;
		i++;
	}
	str1[i] = '\0';
}
