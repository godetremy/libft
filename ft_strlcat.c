/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remy <rgodet@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:32:57 by remy              #+#    #+#             */
/*   Updated: 2024/10/11 11:23:02 by remy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, t_size size)
{
	t_size	i;
	t_size	x;
	t_size	original_size;

	original_size = ft_strlen(dst);
	i = original_size;
	x = 0;
	if (size <= original_size)
		return (size + ft_strlen(src));
	while (src[x] && i < size - 1)
	{
		dst[i] = src[x];
		i++;
		x++;
	}
	dst[i] = 0;
	return (original_size + ft_strlen(src));
}
