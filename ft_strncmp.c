/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 11:39:46 by aroblin           #+#    #+#             */
/*   Updated: 2017/11/24 19:24:55 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned long p;

	p = 0;
	if (n == 0)
		return (0);
	n--;
	while (p < n && (s1[p] == s2[p]) && s1[p] && s2[p])
		p++;
	return ((unsigned char)s1[p] - (unsigned char)s2[p]);
}
