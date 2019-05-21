/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:27:54 by ayano             #+#    #+#             */
/*   Updated: 2019/05/21 09:28:41 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	size_t	i;
	size_t	c;
	char	*str2;

	c = 0;
	i = ft_strlen(str1);
	str2 = (char *)malloc(sizeof(i + 1));
	while (str1[c] != '\0')
	{
		str2[c] = str1[c];
		c++;
	}
	str2[c] = '\0';
	return (str2);
}
