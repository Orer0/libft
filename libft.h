/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtf.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:21:20 by aroblin           #+#    #+#             */
/*   Updated: 2018/12/16 17:35:23 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include "get_next_line.h"
# include "gnl.h"

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
	struct s_list	*prev;
}					t_list;

int					ft_lstlen(t_list *list);
int					ft_tab_strlen(char **tab);
int					gnl(int fd, char **line);
int					ft_count_words(char *str, char sep);
char				*ft_strsub_free(char const *s, unsigned int start,
		size_t len, char **out);
int					ft_strlen_to(const char *s, char c);
char				*ft_strdup_free(const char *s1, char **out);
char				*ft_strdup_to(char *str, char c);
char				*ft_strdup_of(char *str, char c);
int					ft_strlen_end(const char *s, int c);
void				ft_lst_add_end(t_list **lst, t_list *new);
t_list				*ft_lst_new(size_t content_size);
int					ft_abs(int nb);
int					ft_empty_list(t_list *list);
void				ft_lstsup(t_list **list);
int					get_next_line(int fd, char **line);
void				ft_putchar(char c);
void				ft_putstr(char *str);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dest, const char *src);
int					ft_strlen_1(const char *str);
size_t				ft_strlen(const char *str);
void				ft_putnbr(int n);
void				ft_putnbrndl(int n);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strdup(const char *s);
char				*ft_strncat(char *s1, const char *s2, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strchr(const char *s, int c);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				*ft_memset(void *b, int c, size_t len);
int					ft_strpos(const char *s, int c);
void				ft_bzero(void *s, size_t n);
void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				ft_memdel(void **ap);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_strclr(char *s);
void				ft_strdel(char **as);
int					ft_strequ(char const *s1, char const *s2);
void				ft_striter(char *s, void(*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(const char *haystack,
		const char *needle, size_t len);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
int					ft_tolower(int c);
int					ft_toupper(int c);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strjoin_add(char *s1, char *s2, char c);
char				*ft_strjoin_add_free(char *s1, char *s2, char c);
char				*ft_strjoin_free(char *s1, char *s2, char **out);
char				*ft_strjoin_free_1(char **s1, char **s2);
char				*ft_strjoin_free_s1(char **s1, char **s2);
char				*ft_strjoin_free_s2(char **s1, char **s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char *s, char c);
char				*ft_itoa(int n);
char				*ft_itoa_unsigned_short(unsigned short n);
t_list				*ft_lstnew(void	const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
int					ft_strfind(const char *s, int c);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(f)(t_list *elem));
int					ft_is_prime(int nb);
void				ft_foreach(int *tab, int lenght, void (*f)(int));
int					*ft_range(int min, int max);
int					ft_sqrt(int nb);

#endif
