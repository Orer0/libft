/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 20:04:49 by aroblin           #+#    #+#             */
/*   Updated: 2018/12/17 17:33:07 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_ok(char c, char sep)
{
	if (c != sep && c != '\0')
		return (1);
	return (0);
}

int			ft_count_words(char *str, char sep)
{
	if (*str == '\0')
		return (0);
	else if (ft_is_ok(*str, sep) && !ft_is_ok(*(str + 1), sep))
		return (1 + ft_count_words(str + 1, sep));
	return (0 + ft_count_words(str + 1, sep));
}
