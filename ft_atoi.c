/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remy <rgodet@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:34:26 by remy              #+#    #+#             */
/*   Updated: 2024/10/10 16:01:38 by remy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_start_index(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int			pow;
	int			i;
	long int	result;

	pow = 1;
	i = ft_strlen(str) - 1;
	result = 0;
	while (i > get_start_index(str) - !(str[get_start_index(str)] == '-'
			|| str[get_start_index(str)] == '+') && !(str[i] == 43 && i == 0))
	{
		if (ft_isdigit(str[i]))
		{
			result += (str[i] - 48) * pow;
			pow *= 10;
		}
		else
		{
			pow = 1;
			result = 0;
		}
		i--;
	}
	if (str[get_start_index(str)] == '-')
		result *= -1;
	return (result);
}
