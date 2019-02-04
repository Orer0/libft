/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 16:00:44 by aroblin           #+#    #+#             */
/*   Updated: 2019/02/01 21:26:39 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_speacial(const char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
	return (i);
}

int				ft_atoi(const char *nptr)
{
	int i;
	int sign;
	int nb;

	nb = 0;
	sign = 0;
	i = ft_speacial(nptr);
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		sign = i;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb = nb * 10 + nptr[i] - '0';
		i++;
	}
	if (nptr[sign] == '-')
		nb = nb * -1;
	return (nb);
}
