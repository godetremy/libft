/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remy <rgodet@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:34:18 by remy              #+#    #+#             */
/*   Updated: 2024/10/21 10:54:37 by rgodet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, t_size len)
{
	t_size	i;
	t_size	j;

	i = 0;
	if (to_find[0] == '\0')
		return ((char *) str);
	while (len > i && str[i])
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
