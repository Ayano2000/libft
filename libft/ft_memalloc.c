/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:36:02 by ayano             #+#    #+#             */
/*   Updated: 2019/05/27 16:37:16 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*mem;
	int		i;

	i = 0;
	mem = (void *)malloc(size * sizeof(size_t));
	if (mem == NULL)
		return (NULL);
	else
	{
		while (mem[i] != '\0')
		{
			mem[i] = 0;
			i++;
		}
	}
	return (mem);
}
