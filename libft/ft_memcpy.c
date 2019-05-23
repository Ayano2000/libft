/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:13:09 by ayano             #+#    #+#             */
/*   Updated: 2019/05/23 10:42:39 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*str1;
	const char	*str2;

	str1 = (char *)dst;
	str2 = (const char *)src;
	if (n == 0 || dst == src)
		return (dst);
	while (n--)
	{
		str1[n] = str2[n];
	}
	return (dst);
}
