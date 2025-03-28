/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remy <rgodet@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:45:53 by remy              #+#    #+#             */
/*   Updated: 2025/03/26 13:35:26 by rgodet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 256
# endif

typedef unsigned long	t_size;

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int				ft_atoi(const char *str);
void			ft_bzero(void *s, t_size n);
void			*ft_calloc(t_size malloc_size, t_size type_size);
int				ft_isalnum(int character);
int				ft_isalpha(int character);
int				ft_isascii(int character);
int				ft_isdigit(int character);
int				ft_isprint(int character);
int				ft_isspace(int c);
char			*ft_itoa(int num);
void			*ft_memchr(const void *memory, int value, t_size size);
int				ft_memcmp(const void *memory1, const void *memory2,
					t_size size);
void			*ft_memcpy(void *destination, const void *source, t_size size);
void			*ft_memmove(void *destination, const void *source, t_size size);
void			*ft_memset(void *pointer, int value, t_size count);
void			ft_putchar_fd(char character, int fd);
void			ft_putendl_fd(char *str, int fd);
void			ft_putnbr_fd(int nb, int fd);
void			ft_putstr_fd(char *str, int fd);
char			**ft_split(char const *str, char chr);
char			**ft_splitf(char const *str, int (is_chr)(int));
char			*ft_straddchar(char *str, char c);
char			*ft_strchr(const char *str, int chr);
char			*ft_strdup(const char *source);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_strjoin(char const *s1, char const *s2);
t_size			ft_strlcat(char *dst, const char *src, t_size size);
int				ft_strlcpy(char *dst, const char *src, t_size size);
t_size			ft_strlen(const char *theString);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strncmp(const char *s1, const char *s2, t_size size);
char			*ft_strnstr(const char *str, const char *to_find, t_size len);
char			*ft_strrchr(const char *str, int chr);
char			*ft_strtrim(char const *str, char const *set);
char			*ft_substr(char const *str, unsigned int start, t_size len);
int				ft_tolower(int character);
int				ft_toupper(int character);

int				has_newline(char *str);
void			add_str_to_stash(char *str, char **stash);
void			trim_stash(char **stash);
char			*get_next_line(int fd);

t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

unsigned int	ft_rand(unsigned int min, unsigned int max);

#endif
