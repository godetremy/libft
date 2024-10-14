/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remy <rgodet@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:33:53 by remy              #+#    #+#             */
/*   Updated: 2024/10/11 14:35:30 by remy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, t_size size)
{
	t_size i;
	const unsigned char *str1;
	const unsigned char *str2;

	i = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (i < size)
	{
		if (str1[i] != str2[i] || !str1[i] || !str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}