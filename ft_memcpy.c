/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remy <rgodet@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:32:22 by remy              #+#    #+#             */
/*   Updated: 2024/10/11 14:16:02 by remy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memcpy( void * destination, const void * source, t_size size )
{
	t_size i;
	char *dst;
	const char *src;

	i = 0;
	dst = (char *)destination;
	src = (const char *)source;
	if (src == 0 && dst == 0)
		return (0);
	while (i < size) {
		dst[i] = src[i];
		i++;
	}
	return ((void *) dst);
}