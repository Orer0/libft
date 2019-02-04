/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 11:27:52 by aroblin           #+#    #+#             */
/*   Updated: 2018/06/13 17:59:47 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
# define GNL_H

# include <stdlib.h>
# include "libft.h"
# define BUF_SIZE 20
# define L_STR ((t_src *)(temp->content))->str
# define L_FD ((t_src *)(temp->content))->fd

int					gnl(int fd, char **line);

typedef struct		s_src
{
	char			*str;
	int				fd;
}					t_src;

#endif
