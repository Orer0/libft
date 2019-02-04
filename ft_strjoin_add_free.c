/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_add_free.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 18:31:12 by aroblin           #+#    #+#             */
/*   Updated: 2018/12/15 18:34:25 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_add_free(char *s1, char *s2, char c)
{
	int		i;
	int		j;
	char	*dest;

	if (!(s1) || !(s2))
		return (NULL);
	i = -1;
	j = 0;
	if (!(dest = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	while (s1[++i])
		dest[i] = s1[i];
	dest[i] = c;
	i++;
	while (s2[j])
	{
		dest[i] = s2[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	ft_strdel(&s1);
	return (dest);
}
