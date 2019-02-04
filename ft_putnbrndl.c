/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrndl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 14:24:00 by aroblin           #+#    #+#             */
/*   Updated: 2018/02/05 13:16:22 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbrndl(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
		ft_putchar('\n');
	}
	else if (nb < 0 && nb >= -9)
	{
		nb = nb * -1;
		ft_putchar('-');
		ft_putchar(nb + 48);
		ft_putchar('\n');
	}
	else if (nb < -9)
	{
		ft_putchar('-');
		ft_putnbr(nb / 10 * -1);
		ft_putnbr(nb % 10 * -1);
		ft_putchar('\n');
	}
	else
	{
		ft_putchar(nb + 48);
		ft_putchar('\n');
	}
}
