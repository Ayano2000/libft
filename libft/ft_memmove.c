/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:16:17 by ayano             #+#    #+#             */
/*   Updated: 2019/05/23 16:24:09 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = (char *)src;
	str2 = (char *)dst;
	if (src == dst && len > 0)
		return (NULL);
	if (str1 < str2)
		while ((int)(--len) >= 0)
			*(str2 + len) = *(str1 + len);
	else
		while (i < len)
		{
			*(str2 + i) = *(str1 + i);
			i++;
		}
	return (dst);
}
