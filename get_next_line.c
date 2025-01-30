/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodet <rgodet@42student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 01:00:00 by rgodet            #+#    #+#             */
/*   Updated: 2025/01/20 10:40:33 by rgodet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This function trim the response to get the next line
 *
 * @param stash - The string used as stash
 */
static char	*trim_response(char	**stash)
{
	char		*res;
	size_t		i;
	size_t		j;

	if (!stash || !(*stash))
		return (NULL);
	i = 0;
	while ((*stash)[i] && (*stash)[i] != '\n')
		i++;
	res = ft_calloc(i + 1 + has_newline(*stash), sizeof(char));
	if (!res)
		return (NULL);
	j = 0;
	while (j <= i)
	{
		res[j] = (*stash)[j];
		j++;
	}
	trim_stash(stash);
	return (res);
}

static char	*handle_read_error(char *buffer, char **stash)
{
	free(buffer);
	free(*stash);
	*stash = NULL;
	return (NULL);
}

static int	read_buffer(int fd, char *buffer, char **stash)
{
	int	readed_size;

	readed_size = read(fd, buffer, BUFFER_SIZE);
	if (readed_size < 0)
		return (-1);
	if (readed_size > 0)
	{
		buffer[readed_size] = '\0';
		add_str_to_stash(buffer, stash);
	}
	return (readed_size);
}

static char	*init_stash(char **stash)
{
	if (!stash || !(*stash))
	{
		*stash = ft_calloc(1, sizeof(char));
	}
	return (*stash);
}

/**
 * This function return the last readed line from a file descriptor
 *
 * @param fd - File descriptor to read
 */
char	*get_next_line(int fd)
{
	char				*buffer;
	static char			*stash;
	int					readed_size;

	if (fd < 0 || BUFFER_SIZE <= 0 || !init_stash(&stash))
		return (NULL);
	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	readed_size = BUFFER_SIZE;
	while (!has_newline(stash))
	{
		readed_size = read_buffer(fd, buffer, &stash);
		if (readed_size < 0 || !stash)
			return (handle_read_error(buffer, &stash));
		if (readed_size == 0)
			break ;
	}
	free(buffer);
	if (readed_size == 0 && ft_strlen(stash) == 0)
	{
		free(stash);
		return ((stash = NULL));
	}
	return (trim_response(&stash));
}
