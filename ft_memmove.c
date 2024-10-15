/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remy <rgodet@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:32:36 by remy              #+#    #+#             */
/*   Updated: 2024/10/14 16:23:36 by remy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, t_size size)
{
	char		*dest;
	const char	*src;

	dest = (char *) destination;
	src = (char *) source;
	if (src == 0 && dest == 0)
		return (0);
	if (dest < src)
		return (ft_memcpy(destination, source, size));
	while (size > 0)
	{
		size--;
		dest[size] = src[size];
	}
	return ((void *) dest);
}
