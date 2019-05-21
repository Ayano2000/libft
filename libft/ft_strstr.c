/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:40:25 by ayano             #+#    #+#             */
/*   Updated: 2019/05/21 09:40:45 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[i] == haystack[i + j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i + 1]);
			j++;
		}
		i++;
	}
	return (0);
}
