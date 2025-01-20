/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodet <rgodet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:01:01 by rgodet            #+#    #+#             */
/*   Updated: 2025/01/20 10:40:29 by rgodet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	has_newline(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

/**
 * This function update the stash variable to add a string a the end.
 *
 * @param str String to add at the stash
 * @param stash Pointer to the stash
 */
void	add_str_to_stash(char *str, char **stash)
{
	char		*tmp;
	size_t		size;
	size_t		i;

	if (!str || !stash || !*stash)
		return ;
	size = ft_strlen(str) + ft_strlen(*stash);
	tmp = ft_calloc(size + 1, sizeof(char));
	if (tmp)
	{
		i = 0;
		while (*stash && (*stash)[i])
		{
			tmp[i] = (*stash)[i];
			i++;
		}
		i = 0;
		while (str[i])
		{
			tmp[i + ft_strlen(*stash)] = str[i];
			i++;
		}
	}
	free(*stash);
	*stash = tmp;
}

/**
 * This function trim the stash to the first newline found
 *
 * @param stash Pointer to the stash
 */
void	trim_stash(char **stash)
{
	char		*tmp;
	size_t		start_pos;
	size_t		i;

	if (!stash || !*stash)
		return ;
	start_pos = 0;
	while ((*stash)[start_pos] && (*stash)[start_pos] != '\n')
		start_pos++;
	if ((*stash)[start_pos] == '\0')
	{
		free(*stash);
		*stash = NULL;
		return ;
	}
	tmp = ft_calloc(ft_strlen(*stash) - start_pos + 1, sizeof(char));
	if (tmp)
	{
		i = 0;
		while ((*stash)[++start_pos])
			tmp[i++] = (*stash)[start_pos];
	}
	free(*stash);
	*stash = tmp;
}
