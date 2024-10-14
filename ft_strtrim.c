/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remy <rgodet@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:35:06 by remy              #+#    #+#             */
/*   Updated: 2024/10/11 14:56:15 by remy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_ischrinset(char const chr, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == chr)
			return (1);
		i++;
	}
	return (0);
}

char *ft_strtrim(char const *str, char const *set)
{
	unsigned int i;
	unsigned int start_index;
	unsigned int end_len;
	char *res;

	i = 0;
	while (str[i] && ft_ischrinset(str[i], set))
		i++;
	start_index = i;
	i = ft_strlen(str) - 1;
	while (str[i] && ft_ischrinset(str[i], set))
		i--;
	end_len = i - start_index + 1;
	res = ft_substr(str, start_index, end_len);
	return (res);
}