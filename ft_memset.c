/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remy <rgodet@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:31:35 by remy              #+#    #+#             */
/*   Updated: 2024/10/10 09:56:15 by remy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, t_size count)
{
	t_size	i;
	char	*data;

	i = 0;
	data = pointer;
	while (i < count)
	{
		data[i] = value;
		i++;
	}
	return (pointer);
}
