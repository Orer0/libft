/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 10:33:02 by aroblin           #+#    #+#             */
/*   Updated: 2018/12/15 17:19:06 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*zone;
	size_t	i;

	if ((zone = malloc(size)) == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		zone[i] = 0;
		i++;
	}
	return (zone);
}
