/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remy <rgodet@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:33:31 by remy              #+#    #+#             */
/*   Updated: 2024/10/11 10:41:25 by remy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int chr)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (unsigned char)chr)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == (unsigned char)chr)
		return ((char *)&str[i]);
	return (0);
}