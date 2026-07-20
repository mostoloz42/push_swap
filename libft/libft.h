/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 10:48:04 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/20 12:38:17 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *str, int chr, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_calloc(size_t num, size_t size);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_write_num_rev(int index, char *buffer, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	translate_hex_low(int result);
char	translate_hex_up(int result);
int		ft_strncmp(const char *str1, const char *str2, size_t size);
int		ft_memcmp(const void *str1, const void *str2, size_t size);
int		ft_printf(const char *content, int fd, ...);
int		ft_put_hex_low(unsigned int nmb, int fd);
int		ft_put_hex_up(unsigned int nmb, int fd);
int		ft_put_uns(unsigned int nmb, int fd);
int		ft_strlen(const char *str);
int		ft_atoi(const char *nptr);
int		ft_lstsize(t_list *lst);
int		ft_put_double(double nbr, int fd);
int		ft_put_str(char *str, int fd);
int		ft_put_ptr(void *ptr, int fd);
int		ft_put_int(int nbr, int fd);
int		ft_put_char(char c, int fd);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strrchr(const char *str, int chr);
char	*ft_strchr(const char *str, int chr);
char	*ft_strdup(const char *s);
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);

#endif
