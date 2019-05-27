/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:34:29 by ayano             #+#    #+#             */
/*   Updated: 2019/05/27 16:22:56 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int		i;

	i = 0;
	while ((str1[i] != '\0') && (str1[i]) == (str2[i]) && i < (int)n - 1)
		i++;
	if (n)
		return (*((unsigned char *)str1 + i) - *((unsigned char *)str2 + i));
	return (0);
}
