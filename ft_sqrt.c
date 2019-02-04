/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 19:17:38 by aroblin           #+#    #+#             */
/*   Updated: 2017/11/27 14:43:07 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int i;

	i = 2;
	while (i * i < nb)
		i++;
	if (i * i > nb)
		return (0);
	else
		return (i);
}
