/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:03:38 by ayano             #+#    #+#             */
/*   Updated: 2019/05/21 09:07:16 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s1;
	char	c1;

	i = 0;
	c1 = (char)c;
	s1 = (char *)s;
	while (i < n && s1[i] != '\0')
		i++;
	if (s1[i] == '\0')
		return (NULL);
	else
		return ((void *)&s[i]);
}
