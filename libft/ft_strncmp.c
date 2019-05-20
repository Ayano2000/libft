#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while (str1[n] == str2[n] && str1[n] != '\0' && str2[n] != '\0')
		n++;
	return (str1[n] - str2[n]);
}
