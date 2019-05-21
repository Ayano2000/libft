/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:32:14 by ayano             #+#    #+#             */
/*   Updated: 2019/05/21 16:25:12 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

static int    ft_nblength(int nb)
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
    int			sign;
	
	sign = 0;
	n1 = n;
	len = ft_nblength(n);
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (n < 0)
	{
		n *= -1;
		sign = 1;
	}
	while (n > 0)
	{
		str[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	if (sign)
		str[len] = '-';
	return (str);
}
