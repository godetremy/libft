/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remy <rgodet@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:35:35 by remy              #+#    #+#             */
/*   Updated: 2024/10/17 10:49:22 by remy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int num)
{
	int	i;

	i = 0;
	while (num != 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

static void	complete_minint(char *res)
{
	res[0] = '-';
	res[1] = '2';
	res[2] = '1';
	res[3] = '4';
	res[4] = '7';
	res[5] = '4';
	res[6] = '8';
	res[7] = '3';
	res[8] = '6';
	res[9] = '4';
	res[10] = '8';
	res[11] = 0;
}

static char	*ft_itoaspecialcase(int num)
{
	char	*res;
	int		size;

	size = 12;
	if (num == 0)
		size = 2;
	res = malloc(size * sizeof(char));
	if (!res)
		return (0);
	if (size == 2)
	{
		res[0] = '0';
		res[1] = 0;
		return (res);
	}
	complete_minint(res);
	return (res);
}

static void	ft_itoa_iteration(char	*res, int	*i, int *num)
{
	res[*i] = (*num % 10) + 48;
	*num = *num / 10;
	*i -= 1;
}

char	*ft_itoa(int num)
{
	char	*res;
	int		i;
	int		is_negative;

	is_negative = 0;
	res = 0;
	if (num < -2147483647 || num == 0)
		return (ft_itoaspecialcase(num));
	if (num < 0)
	{
		num *= -1;
		is_negative = 1;
	}
	i = ft_intlen(num) + is_negative - 1;
	res = ft_calloc((i + 2), sizeof(char));
	if (!res)
		return (0);
	while (num != 0)
		ft_itoa_iteration(res, &i, &num);
	if (is_negative)
		res[i] = '-';
	return (res);
}
