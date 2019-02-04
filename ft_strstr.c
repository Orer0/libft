/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 13:59:53 by aroblin           #+#    #+#             */
/*   Updated: 2017/11/24 16:03:01 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	int		x;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		x = i;
		while (haystack[i] == needle[j])
		{
			j++;
			i++;
			if (needle[j] == '\0')
				return ((char *)haystack + x);
		}
		i = x;
		j = 0;
		i++;
	}
	return (NULL);
}
