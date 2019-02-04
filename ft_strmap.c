/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 10:37:54 by aroblin           #+#    #+#             */
/*   Updated: 2017/11/27 11:26:39 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*dest;
	int		i;

	if (!(s) || !(f))
		return (NULL);
	i = 0;
	if (!(dest = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[i])
	{
		dest[i] = f(s[i]);
		i++;
	}
	return (dest);
}
