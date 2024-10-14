/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remy <rgodet@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:34:01 by remy              #+#    #+#             */
/*   Updated: 2024/10/11 10:38:00 by remy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memory, int value, t_size size)
{
	t_size i;
	const char *data;

	i = 0;
	data = (const char *) memory;
	while (i < size)
	{
		if (data[i] == (char) value)
			return ((void *) &memory[i]);
		i++;
	}
	return (NULL);
}