/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remy <rgodet@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:34:33 by remy              #+#    #+#             */
/*   Updated: 2024/10/17 10:27:34 by remy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(t_size malloc_size, t_size type_size)
{
	void	*res;

	res = malloc(malloc_size * type_size);
	if (res == 0)
		return (0);
	ft_bzero(res, malloc_size * type_size);
	return (res);
}
