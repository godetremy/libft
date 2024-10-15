/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remy <rgodet@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:34:18 by remy              #+#    #+#             */
/*   Updated: 2024/10/14 15:21:12 by remy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str,	const char *to_find, t_size len)
{
	t_size	i;
	t_size	j;

	i = 0;
	if (ft_strlen(to_find) == 0)
		return ((char *) str);
	if (len > ft_strlen(str))
		len = ft_strlen(str);
	while (len > i)
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] == to_find[j] && str[i + j]
				&& to_find[j] && len > i + j)
				j++;
			if (j == ft_strlen(to_find))
				return ((char *) &str[i]);
		}
		i++;
	}
	return (0);
}
