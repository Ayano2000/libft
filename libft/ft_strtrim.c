/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:08:42 by ayano             #+#    #+#             */
/*   Updated: 2019/05/27 16:11:21 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str)
{
	char	*nstr;
	int		i;
	int		l;
	int		x;

	i = 0;
	x = 0;
	if ((int)ft_strlen(str) == 0)
		return ((char*)str);
	l = (int)ft_strlen(str) - 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	if (str[i] == '\0')
		return (ft_strdup(""));
	while (str[l] == '\t' || str[l] == '\n' || str[l] == ' ')
		l--;
	if (l < 0)
		l = 0;
	if (!(nstr = (char *)malloc(sizeof(char) * (l - i) + 2)))
		return (NULL);
	while (i <= l)
		nstr[x++] = str[i++];
	nstr[x] = '\0';
	return (nstr);
}
