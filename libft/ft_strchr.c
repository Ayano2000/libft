/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:23:59 by ayano             #+#    #+#             */
/*   Updated: 2019/05/21 09:25:19 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int to_find)
{
	size_t	i;

	i = 0;
	while (str[i] != to_find && str[i] != '\0')
		i++;
	if (str[i] == '\0')
		return (NULL);
	else
		return ((char *)&str[i + 1]);
}
