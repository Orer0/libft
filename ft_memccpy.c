/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 09:47:39 by aroblin           #+#    #+#             */
/*   Updated: 2017/11/24 16:31:29 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	const unsigned char *s1;
	unsigned char		*s2;

	i = 0;
	s1 = src;
	s2 = dst;
	while (i < n)
	{
		if (s1[i] == (unsigned char)c)
		{
			s2[i] = s1[i];
			i++;
			return (s2 + i);
		}
		s2[i] = s1[i];
		i++;
	}
	return (NULL);
}
