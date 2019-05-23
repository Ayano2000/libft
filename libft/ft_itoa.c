/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:32:14 by ayano             #+#    #+#             */
/*   Updated: 2019/05/23 16:39:04 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isnegative(int negative)
{
	if (negative < 0)
	{
		negative = -1;
	}
	else
		negative = 1;
	return (negative);
}
static int    	ft_nblength(int nb)
{
	size_t 		count;
	
	count = 0;
	if (nb == 0)
		return (1);
	while (nb)
	{
		nb = nb / 10;
		count++;
	}
	return (count + 1);
}

char    *ft_itoa(int n)
{
	char		*str;
    int			n1;
	long		len;
	
	n1 = n;
	len = ft_nblength(n);
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
		str[0] = 48;
	if (n < 0)
	{
		n = n * 1;
		ft_isnegative(n);
	}
	while (n > 0)
	{
		str[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (str);
}
