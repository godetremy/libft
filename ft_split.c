/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remy <rgodet@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:35:21 by remy              #+#    #+#             */
/*   Updated: 2024/10/14 14:05:42 by remy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	find_malloc_size(char const *str, char chr) {
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == chr && str[i])
			i++;
		if (str[i])
			count++;
		while (str[i] != chr && str[i])
			i++;
	}
	return (count);
}

int get_start_pos(char const *str, char chr)
{
	int i;

	i = 0;
	while (str[i] == chr)
		i++;
	return (i);
}

char	**error_handling(char **res, int i)
{
	while (i >= 0)
	{
		free(res[i]);
		i--;
	}
	free(res);
	return (0);
}

char **ft_split(char const *str, char chr) {
	char **res;
	int		i;
	int		array_pos;
	int		start_pos;

	if (ft_strlen(str) == 1)
		return (ft_calloc(1, sizeof(char)));
	res = ft_calloc(find_malloc_size(str, chr) + 1, sizeof(char *));
	if (!res)
		return (0);
	i = 0;
	array_pos = 0;
	while (str[i])
	{
		while (str[i] == chr && str[i])
			i++;
		if (str[i] == 0)
			break;
		start_pos = i;
		while (str[i] != chr && str[i])
			i++;
		res[array_pos] = ft_substr(str, start_pos, i - start_pos);
		if (!res[array_pos])
			return (error_handling(res, i));
		array_pos++;
	}
	return res;
}

/*int main() {
	int i;
	char **trim = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');

	i = 0;
	while (trim[i])
	{
		printf("%s\n", trim[i]);
		free(trim[i]);
		i++;
	}
	free(trim);
	return (1);
}*/
