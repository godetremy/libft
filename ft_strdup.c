/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remy <rgodet@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:34:43 by remy              #+#    #+#             */
/*   Updated: 2024/10/10 11:10:16 by remy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	int		i;
	char	*res;

	res = ft_calloc(ft_strlen(source) + 1, sizeof(char));
	if (!res)
		return (0);
	i = 0;
	while (source[i])
	{
		res[i] = source[i];
		i++;
	}
	return (res);
}
