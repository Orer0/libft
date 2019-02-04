/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 13:38:21 by aroblin           #+#    #+#             */
/*   Updated: 2018/12/16 22:43:55 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl.h"

int			ft_check(char **line, int fd)
{
	if (line != NULL)
	{
		ft_strdel(line);
		*line = NULL;
	}
	if (fd < 0 || !line)
		return (-1);
	return (1);
}

t_src		*create_content(int fd)
{
	t_src			*src;

	if (!(src = ft_memalloc(sizeof(t_src *))))
		return (NULL);
	src->fd = fd;
	if (!(src->str = ft_strnew(0)))
		return (NULL);
	return (src);
}

t_list		*find_fd(t_list **list, int fd)
{
	t_list			*temp;

	temp = *list;
	while (temp != NULL)
	{
		if (L_FD == fd)
			return (temp);
		temp = temp->next;
	}
	if (!(temp = ft_lstnew(NULL, sizeof(t_src *))))
		return (NULL);
	temp->content = create_content(fd);
	ft_lstadd(list, temp);
	return (temp);
}

char		*ft_endfile(char *str)
{
	char			*temp;

	if (!(str))
		return (NULL);
	if (ft_strfind(str, '\n'))
	{
		temp = str;
		str = ft_strdup(ft_strchr(str, '\n') + 1);
		ft_strdel(&temp);
	}
	else
		ft_strdel(&str);
	return (str);
}

int			gnl(int fd, char **line)
{
	int				n_lus;
	char			*buf;
	t_list			*temp;
	static t_list	*list;

	n_lus = 0;
	if (!(buf = ft_strnew(BUFF_SIZE)))
		return (-1);
	if (!ft_check(line, fd) || read(fd, "", 0) < 0)
		return (-1);
	temp = find_fd(&list, fd);
	while ((!ft_strfind(L_STR, '\n') && (n_lus = read(fd, buf, BUFF_SIZE) > 0)))
	{
		L_STR = ft_strjoin_free_s1(&L_STR, &buf);
		ft_strclr(buf);
	}
	if (ft_strcmp(L_STR, "") != 0)
		*line = ft_strsub(L_STR, 0, ft_strpos(L_STR, '\n'));
	if (!(L_STR = ft_endfile(L_STR)) && n_lus == 0 && !*line)
	{
		ft_lstsup(&list);
		return (0);
	}
	ft_strdel(&buf);
	return (1);
}
