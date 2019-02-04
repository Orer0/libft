/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 18:53:26 by aroblin           #+#    #+#             */
/*   Updated: 2017/11/27 14:39:21 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_range(int min, int max)
{
	int *tab;
	int i;
	int len;

	tab = NULL;
	if (min >= max)
		return (tab);
	len = max - min;
	i = 0;
	if (!(tab = malloc(sizeof(int) * (len))))
		return (0);
	while (i < len)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
