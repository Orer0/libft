/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 18:13:13 by aroblin           #+#    #+#             */
/*   Updated: 2018/03/01 20:22:24 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstsup(t_list **list)
{
	t_list *next;

	while (*list)
	{
		next = (*list)->next;
		free((*list)->content);
		free((void**)(*list)->content_size);
		free(*list);
		*list = NULL;
		*list = next;
	}
}
