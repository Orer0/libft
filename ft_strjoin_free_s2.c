/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free_s2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 17:22:35 by aroblin           #+#    #+#             */
/*   Updated: 2018/02/13 17:24:34 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free_s2(char **s1, char **s2)
{
	int		i;
	int		j;
	char	*dest;

	if (!(s1) || !(s2))
		return (NULL);
	i = 0;
	j = 0;
	if (!(dest = ft_strnew(ft_strlen(*s1) + ft_strlen(*s2))))
		return (NULL);
	while ((*s1)[i])
	{
		dest[i] = (*s1)[i];
		i++;
	}
	while ((*s2)[j])
	{
		dest[i] = (*s2)[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	ft_strdel(&*s2);
	return (dest);
}
