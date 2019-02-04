/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 08:59:42 by aroblin           #+#    #+#             */
/*   Updated: 2018/01/30 14:43:42 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		x;

	i = 0;
	x = 0;
	while (s[i])
	{
		if (s[i] == c)
			x = i;
		i++;
	}
	if (s[i] == c)
		return ((char *)s + i);
	else if (x == 0 && s[x] != c)
		return (NULL);
	else
		return ((char *)s + x);
}
