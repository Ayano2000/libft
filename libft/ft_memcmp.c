/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:07:47 by ayano             #+#    #+#             */
/*   Updated: 2019/05/21 09:10:41 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = ((unsigned char *)s1);
	str2 = ((unsigned char *)s2);
	while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0' &&
			str1[i] < n && str2[i] < n)
	{
		i++;
	}
	return (str1 - str2);
}
