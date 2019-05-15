#include "libft.h"

char	(const char *haystack, const char *needle)
{
	size_t i;
	size_t c;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (needle[i] == haystack[i + j])
		{
			if (needle[j + 1] == '\0')
				return (haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}
