/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 18:44:48 by aroblin           #+#    #+#             */
/*   Updated: 2017/11/27 16:00:47 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char		*dest;
	size_t		i;
	size_t		start;

	if (!(s))
		return (NULL);
	i = ft_strlen(s) - 1;
	start = 0;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	if (start == ft_strlen(s))
		return (ft_strsub(s, start, 1));
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i--;
	dest = ft_strsub(s, start, (i - start + 1));
	return (dest);
}
