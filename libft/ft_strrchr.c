/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:38:22 by ayano             #+#    #+#             */
/*   Updated: 2019/05/21 09:40:06 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *str, int to_find)
{
	size_t i;

	i = ft_strlen(str);
	while (str[i] != to_find && 0 != i)
		i--;
	if (0 == i)
		return (NULL);
	else
		return ((char *)&str[i + 1]);
}
