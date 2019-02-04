/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 17:36:43 by aroblin           #+#    #+#             */
/*   Updated: 2018/12/16 17:39:08 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen_end(const char *s, int c)
{
	int		i;
	int		size;
	int		cap;

	cap = 0;
	size = 0;
	i = 0;
	if (!(s) || !(c))
		return (-1);
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			cap = 1;
		if (cap == 1)
			size++;
		i++;
	}
	return (size);
}
