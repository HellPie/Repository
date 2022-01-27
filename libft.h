/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:31:57 by drossi            #+#    #+#             */
/*   Updated: 2022/01/27 02:25:51 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/**
 * Needed for NULL and size_t. It's a core C Standard header which makes it
 * ideal compared to string.h as it does not include all of the extra cruft
 * string.h brings with it since most of it can't be used as per project rules.
 */

# include <stddef.h>

/**
 * Surrogates for the ctype.h libc header
 */

int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isblank(int c);
int			ft_iscntrl(int c);
int			ft_isdigit(int c);
int			ft_isgraph(int c);
int			ft_islower(int c);
int			ft_isprint(int c);
int			ft_ispunct(int c);
int			ft_isspace(int c);
int			ft_isupper(int c);
int			ft_isxdigit(int c);

int			ft_tolower(int c);
int			ft_toupper(int c);

int			ft_isascii(int c);
int			ft_toascii(int c);

/**
 * Surrogates for the stdlib.h libc header
 */

int			ft_atoi(const char *s);

int			ft_abs(int a);
long		ft_labs(long a);
long long	ft_llabs(long long a);

/**
 * Surrogates for the string.h and strings.h libc headers
 */

void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memset(void *dest, int c, size_t n);
void		*ft_memchr(const void *src, int c, size_t n);

int			ft_memcmp(const void *v1, const void *v2, size_t n);

char		*ft_strcpy(char *dest, const char *src);
char		*ft_strncpy(char *dest, const char *src, size_t n);

char		*ft_strcat(char *dest, const char *src);
char		*ft_strncat(char *dest, const char *src, size_t n);

int			ft_strcmp(const char *l, const char *r);
int			ft_strncmp(const char *l, const char *r, size_t n);

char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);

char		*ft_strstr(const char *h, const char *n);

size_t		ft_strlen(const char *s);

char		*ft_stpcpy(char *dest, const char *src);
char		*ft_stpncpy(char *dest, const char *src, size_t n);
size_t		ft_strnlen(const char *s1, size_t len);
char		*ft_strdup(const char *s);

size_t		ft_strlcat(char *dest, const char *src, size_t n);
size_t		ft_strlcpy(char *s1, const char *s2, size_t len);

char		*ft_strnstr(const char *haystack, const char *needle, size_t len);

void		*ft_memccpy(void *dest, const void *src, int c, size_t n);
void		*ft_memrchr(const void *m, int c, size_t n);
char		*ft_strchrnul(const char *s, int c);

void		ft_bzero(void *s, size_t n);

/**
 * Additional definitions for methods not compliant to the Standard C subset
 */

void		*ft_memalloc(size_t size);
void		ft_memdel(void **ap);

char		*ft_strnew(size_t size);
void		ft_strdel(char **as);
void		ft_strclr(char *s);

void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));

char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int			ft_strequ(char const *s1, char const *s2);
int			ft_strnequ(char const *s1, char const *s2, size_t n);

char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s);
char		**ft_strsplit(char const *s, char c);

char		*ft_itoa(int n);

void		ft_putchar(char c);
void		ft_putstr(char const *s);
void		ft_putendl(char const *s);
void		ft_putnbr(int n);

void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char const *s, int fd);
void		ft_putendl_fd(char const *s, int fd);
void		ft_putnbr_fd(int n, int fd);

/**
 * Additional definitions for methods in the Bonus part of the LIBFT project
 */

typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}	t_list;

t_list		*ft_lstnew(void const *content, size_t content_size);

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t));

void		ft_lstadd(t_list **alst, t_list *new);
void		ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif