/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 22:33:31 by aroblin           #+#    #+#             */
/*   Updated: 2017/11/27 14:34:23 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_prime(int nb)
{
	int i;
	int prime;

	prime = 0;
	i = 1;
	while (nb >= i)
	{
		if (nb % i == 0)
			prime = prime + 1;
		i++;
	}
	if (prime == 2)
		return (1);
	else
		return (0);
}
