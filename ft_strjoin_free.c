/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 23:37:43 by lmeyre            #+#    #+#             */
/*   Updated: 2018/05/15 19:14:09 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free(char *s1, char *s2, char **out)
{
	int		i;
	char	*ptr;

	if (!(s1) || !(s2))
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2);
	if (!(ptr = ft_strnew(i)))
		return (NULL);
	if (!(ptr = ft_strcpy(ptr, s1)))
		return (NULL);
	if (!(ptr = ft_strcat(ptr, s2)))
		return (NULL);
	if (*out)
		ft_strdel(out);
	return (ptr);
}
