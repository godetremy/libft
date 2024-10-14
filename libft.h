/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remy <rgodet@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:45:53 by remy              #+#    #+#             */
/*   Updated: 2024/10/14 14:30:16 by remy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#include <stdio.h>

typedef unsigned int	t_size;

void		ft_putchar_fd(char character, int fd);
void		ft_putendl_fd(char *str, int fd);
void		ft_putnbr_fd(int num, int fd);
void		ft_putstr_fd(char *str, int fd);
int			ft_atoi(const char *str);
char		*ft_itoa(int num);
void		ft_bzero(void *s, t_size n);
void		*ft_calloc(t_size malloc_size, t_size type_size);
void		*ft_memchr(const void *memoryBlock, int searchedChar, t_size size);
int			ft_memcmp(const	void *s1, const void	*s2, t_size n);
void		*ft_memcpy(void	*destination, const void	*source, t_size size);
void		*ft_memmove(void	*destination, const void	*source, t_size size);
void		*ft_memset(void * pointer, int value, t_size count);
char		**ft_split(char const *s, char c);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strtrim(char const *s1, char const *set);
int			ft_isalnum(int character);
int			ft_isalpha(int character);
int			ft_isascii(int character);
int			ft_isdigit(int character);
int			ft_isprint(int character);
char		*ft_strchr(const char	*string, int searchedChar);
char		*ft_strdup(const char	*source);
int			ft_strlcat(char *dst, const char *src, t_size size);
int			ft_strlcpy(char *dst, const char *src, t_size size);
t_size		ft_strlen(const char *theString);
int			ft_strncmp(const char *first, const char *second, t_size length);
char		*ft_strnstr(const char *big,	const char *little, t_size len);
char		*ft_substr(char const *s, unsigned int start, t_size len);
int			ft_tolower(int character);
int			ft_toupper(int character);
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
char		*ft_strrchr(const char *str, int chr);

#endif