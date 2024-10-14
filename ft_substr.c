/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remy <rgodet@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:34:50 by remy              #+#    #+#             */
/*   Updated: 2024/10/14 14:06:53 by remy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *str, unsigned int start, t_size len)
{
	char *res;
	t_size i;
	t_size str_len;

	str_len = ft_strlen(str);
	if (start >= ft_strlen(str))
		return (ft_calloc(1, sizeof(char)));
	if (len > str_len - start)
		len = str_len - start;
	res = ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (0);
	i = 0;
	while (i < len && str[i + start])
	{
		res[i] = str[i + start];
		i++;
	}
	return res;
}

