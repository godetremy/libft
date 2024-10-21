/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remy <rgodet@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:34:33 by remy              #+#    #+#             */
/*   Updated: 2024/10/21 10:31:54 by rgodet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(t_size malloc_size, t_size type_size)
{
	void	*res;

	if (malloc_size == 0 || type_size == 0)
		return (malloc(0));
	if (malloc_size > (size_t) - 1 / type_size)
		return (NULL);
	res = malloc(malloc_size * type_size);
	if (!res)
		return (0);
	ft_bzero(res, malloc_size * type_size);
	return (res);
}
