/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_of.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 17:36:23 by aroblin           #+#    #+#             */
/*   Updated: 2018/12/18 00:48:04 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup_of(char *str, char c)
{
	char	*dest;
	int		i;
	int		cap;
	int		j;

	j = 0;
	cap = 0;
	i = 0;
	if (!(dest = ft_strnew(ft_strlen_end(str, c) + 1)))
		return (NULL);
	while (str[i])
	{
		if (cap == 1)
		{
			dest[j] = str[i];
			j++;
		}
		if (str[i] == c)
			cap = 1;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
