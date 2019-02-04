/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 14:31:02 by aroblin           #+#    #+#             */
/*   Updated: 2018/12/17 14:31:05 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_fd		*mng(t_fd **strct, char **line, int *bool, int *boolbis)
{
	size_t			i;

	i = 0;
	while ((*strct)->tmp != NULL)
	{
		i = ft_strlen_to((*strct)->tmp, '\n');
		if (i == 0 && (*strct)->tmp[0] != '\n')
		{
			*line = ft_strdup_free((*strct)->tmp, line);
			((*strct)->tmp) ? ft_strdel(&((*strct)->tmp)) : 0;
			*boolbis = 1;
		}
		else
		{
			*line = ft_strsub_free((*strct)->tmp, 0, i, line);
			if ((i + 2) <= ft_strlen((*strct)->tmp))
				(*strct)->tmp =
					ft_strdup_free((*strct)->tmp + i + 1, &((*strct)->tmp));
			else
				ft_strdel(&((*strct)->tmp));
			*bool = 1;
		}
		return (*strct);
	}
	return (*strct);
}

static t_list	*list_check(int fd, t_list *lst,
				t_list **lst_tmp, t_filler **ltl)
{
	(*ltl)->bool = 0;
	(*ltl)->boolbis = 0;
	(*ltl)->lll = 0;
	if (!lst)
	{
		lst = ft_lst_new(sizeof(t_fd));
		CNTT->fd = fd;
	}
	*lst_tmp = lst;
	while (lst->next != NULL && fd != CNTT->fd)
		lst = lst->next;
	if (lst->next == NULL && fd != CNTT->fd)
	{
		ft_lst_add_end(&lst, ft_lst_new(sizeof(t_fd)));
		lst = lst->next;
	}
	CNTT->fd = fd;
	return (lst);
}

int				job(char *buf, t_list *lst, int *bool, char **line)
{
	size_t			i;
	char			*omg;

	i = ft_strlen_to(buf, '\n');
	(i == 0 && buf[0] != '\n') ? *line = ft_strjoin_free(*line, buf, line) : 0;
	(i == 0 && buf[0] != '\n') ? *bool = 1 : 0;
	if (i != 0 || buf[0] == '\n')
	{
		if ((*line)[0] == '\0')
			*line = ft_strsub_free(buf, 0, i, line);
		else
		{
			omg = ft_strsub(buf, 0, i);
			*line = ft_strjoin_free(*line, omg, line);
			ft_strdel(&omg);
		}
		if ((i + 2) <= ft_strlen(buf))
			CNTT->tmp = ft_strdup_free(buf + i + 1, &(CNTT->tmp));
		else
			ft_strdel(&(CNTT->tmp));
		return (1);
	}
	return (0);
}

int				ft_filler(t_list **lst, t_list **lst_tmp,
				t_filler **ltl, char **line)
{
	int				unused;

	(*ltl)->ret = read(((t_fd*)((*lst)->content))->fd, (*ltl)->buf, BUFF_SIZE);
	if ((*ltl)->ret == -1 || !((*ltl)->ret))
	{
		(*ltl)->boolbis == 1 ? (*ltl)->bool = 1 : (*ltl)->bool;
		unused = ((*ltl)->ret == -1 ? -1 : (*ltl)->bool);
		ft_strdel(&((*ltl)->buf));
		free(*ltl);
		return (unused);
	}
	(*ltl)->buf[(*ltl)->ret] = '\0';
	(*ltl)->ret ? (*ltl)->bool = 0 : 0;
	if (job((*ltl)->buf, *lst, &((*ltl)->bool), line))
	{
		*lst = *lst_tmp;
		ft_strdel(&((*ltl)->buf));
		free(*ltl);
		return (1);
	}
	return (-42);
}

int				get_next_line(int fd, char **line)
{
	t_filler		*ltl;
	t_list			*lst_tmp;
	static t_list	*lst;

	if (fd < 0 || !line || !(ltl = ft_memalloc(sizeof(t_filler)))
			|| !(*line = ft_strnew(BUFF_SIZE))
			|| !(ltl->buf = ft_strnew(BUFF_SIZE)))
		return (-1);
	lst = list_check(fd, lst, &lst_tmp, &ltl);
	while (1)
	{
		if (CNTT->tmp)
		{
			mng((t_fd**)&(lst->content), line, &(ltl->bool), &(ltl->boolbis));
			if (ltl->bool == 1)
			{
				lst = lst_tmp;
				ft_strdel(&(ltl->buf));
				free(ltl);
				return (1);
			}
		}
		if ((fd = ft_filler(&lst, &lst_tmp, &ltl, line)) != -42)
			return (fd);
	}
}
