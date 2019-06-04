/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:20:11 by ayano             #+#    #+#             */
/*   Updated: 2019/06/04 12:38:07 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *str, char (*f)(char))
{
	int		i;
	int		j;
	char	*nstr;

	i = 0;
	j = 0;
	i = ft_strlen((char *)str);
	if (str == NULL)
		return (NULL);
	if (!(nstr = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	while (str[j] != '\0')
	{
		nstr[j] = f(str[j]);
		j++;
	}
	nstr[j] = '\0';
	return (nstr);
}
