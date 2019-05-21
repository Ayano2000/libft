/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:34:57 by ayano             #+#    #+#             */
/*   Updated: 2019/05/21 09:35:07 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t i;
	size_t c;

	i = 0;
	c = ft_strlen(dest);
	while (src[i] != '\0' && i < len)
	{
		dest[c] = src[i];
		c++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
