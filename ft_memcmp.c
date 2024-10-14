/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remy <rgodet@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:34:09 by remy              #+#    #+#             */
/*   Updated: 2024/10/10 17:35:58 by remy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void * memory1,const void * memory2, t_size size )
{
	t_size i;
	const unsigned char *data1;
	const unsigned char *data2;

	data1 = memory1;
	data2 = memory2;
	i = 0;
	while (i < size)
	{
		if (data1[i] != data2[i])
			return (data1[i] - data2[i]);
		i++;
	}
	return (0);
}