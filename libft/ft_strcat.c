#include "libft.h"

char	*ft_strcat(char *str1, const char *str2)
{
	size_t i;
	size_t c;

	i = 0;
	c = 0;

	i = ft_strlen(str1);

	while (str2[c] != "\0")
	{
		str1[i] = str2[c];
		c++;
		i++;
	}
	str1[i] = '\0';
}
