/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remy <rgodet@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:35:21 by remy              #+#    #+#             */
/*   Updated: 2025/03/26 13:34:00 by rgodet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_size	find_malloc_size(char const *str, int (is_chr)(int))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_chr(str[i]))
			i++;
		if (str[i])
			count++;
		while (str[i] && !is_chr(str[i]))
			i++;
	}
	return (count);
}

static char	**error_handling(char **res, int i)
{
	while (i >= 0)
	{
		free(res[i]);
		i--;
	}
	free(res);
	return (0);
}

static int	iteration_is_char(char const *str, int (is_chr)(int), int i)
{
	while (str[i] && is_chr(str[i]))
		i += 1;
	return (i);
}

static int	iteration_is_not_char(char const *str, int (is_chr)(int),
									int i)
{
	while (str[i] && !is_chr(str[i]))
		i += 1;
	return (i);
}

char	**ft_splitf(char const *str, int (is_chr)(int))
{
	char	**res;
	int		i;
	int		array_pos;
	int		start_pos;

	if (!str)
		return (0);
	res = ft_calloc(find_malloc_size(str, is_chr) + 1, sizeof(char *));
	if (!res)
		return (0);
	i = 0;
	array_pos = 0;
	while (str[i])
	{
		i = iteration_is_char(str, is_chr, i);
		if (str[i] == 0)
			break ;
		start_pos = i;
		i = iteration_is_not_char(str, is_chr, i);
		res[array_pos] = ft_substr(str, start_pos, i - start_pos);
		if (!res[array_pos])
			return (error_handling(res, array_pos - 1));
		array_pos++;
	}
	return (res);
}
