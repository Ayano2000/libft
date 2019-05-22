/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:29:31 by ayano             #+#    #+#             */
/*   Updated: 2019/05/22 18:06:21 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	c;
	size_t	f;

	i = 0;
	c = 0;
	if (dstsize == 0)
		return (ft_strlen(dst));
	while (dst[c] != '\0' && c < dstsize)
		c++;
	while (src[i] != '\0' && c + i < dstsize - 1)
	{
		dst[c + i] = src[i];
		i++;
	}
	if (c + i < dstsize)
		dst[c + i] = '\0';
	f = 0;
	while (src[f] != '\0')
		f++;
	return (f + (ft_strlen(dst) - 1));
}
