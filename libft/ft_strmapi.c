/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:15:39 by ayano             #+#    #+#             */
/*   Updated: 2019/05/27 16:20:07 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	int				i;
	unsigned int	j;
	char			*nstr;

	i = 0;
	j = 0;
	i = ft_strlen((char *)str);
	if (str == NULL)
		return (NULL);
	if (!(nstr = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	while (str[j] != '\0')
	{
		nstr[j] = (f)(j, str[j]);
		j++;
	}
	nstr[j] = '\0';
	return (nstr);
}
