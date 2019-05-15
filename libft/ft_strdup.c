#include "libft.h"

void	ft_strdup(const char *str1)
{
	size_t i;
	size_t c;

	while (str1[i] != "\0")
	{
		i++;
	}
	str2 = (char *) malloc(sizeof(i + 1));
	while (str1[c] != "\0")
	{
		str1[c] = str2[c];
		c++;
	}
	str2[c] = '\0';
}
