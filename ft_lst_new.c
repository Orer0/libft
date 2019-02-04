/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 13:36:23 by lmeyre            #+#    #+#             */
/*   Updated: 2018/10/11 13:25:37 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lst_new(size_t content_size)
{
	t_list	*ptr;

	if (!(ptr = (t_list *)ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (content_size == 0)
		ptr->content = NULL;
	else if (!(ptr->content = ft_memalloc(content_size)))
		return (NULL);
	ptr->next = NULL;
	ptr->prev = NULL;
	return (ptr);
}
