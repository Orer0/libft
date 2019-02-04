/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 10:33:51 by aroblin           #+#    #+#             */
/*   Updated: 2018/01/31 14:27:20 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 0 && nb >= -9)
	{
		nb = nb * -1;
		ft_putchar('-');
		ft_putchar(nb + 48);
	}
	else if (nb < -9)
	{
		ft_putchar('-');
		ft_putnbr(nb / 10 * -1);
		ft_putnbr(nb % 10 * -1);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}
