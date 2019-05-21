/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:16:17 by ayano             #+#    #+#             */
/*   Updated: 2019/05/21 09:20:40 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	if (str1 == str2)
		return (str2);
	else if (str1 < str2)
	{
		str2 = str2 + len - 1;
		str1 = str1 + len - 1;
		while (len > 0)
			*str1-- = *str2--;
	}
	else
		while (len > 0)
			*str1++ = *str2++;
	return (dst);
}
