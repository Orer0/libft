/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 09:15:31 by aroblin           #+#    #+#             */
/*   Updated: 2017/11/27 16:28:44 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_intlen(int n)
{
	int nb;
	int len;

	nb = n;
	len = 1;
	while (nb > 9 || nb < -9)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

static char		*ft_itoaneg(int n)
{
	int				len;
	char			*str;
	unsigned int	nb;

	len = ft_intlen(n);
	if (!(str = ft_strnew(len + 1)))
		return (NULL);
	nb = n * -1;
	while (len > 0)
	{
		str[len] = nb % 10 + '0';
		nb = nb / 10;
		len--;
	}
	str[len] = '-';
	return (str);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_intlen(n);
	if (!(str = ft_strnew(len)))
		return (NULL);
	if (n < 0)
		return (ft_itoaneg(n));
	len = len - 1;
	while (len >= 0)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (str);
}
