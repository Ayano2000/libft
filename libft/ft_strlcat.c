/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:29:31 by ayano             #+#    #+#             */
/*   Updated: 2019/05/21 09:31:25 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	while (dst[c] != '\0' && c < dstsize)
		c++;
	while (src[i] != '\0' && c + i < dstsize - 1)
	{
		dst[c + i] = src[i];
		i++;
	}
	if (c + i < dstsize)
		dst[c + i] = '\0';
	return (ft_strlen(dst));
}
