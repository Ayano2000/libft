#include "libft.h"

int 	ft_atoi(char *str)
{
	size_t i;
	size_t nbr;
	size_t neg;

	i = 0;
	nbr = 0;
	neg = 1;
	while ((str[i] == '\n' || str[i] ==	' ' || str[i] == '\t'))
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	while ((str[i] != '\0') && (str[i] >= '0' && str[i] <= '9'))
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	return (nbr * neg)
}
