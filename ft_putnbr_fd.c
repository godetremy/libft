/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remy <rgodet@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:36:17 by remy              #+#    #+#             */
/*   Updated: 2024/10/10 17:45:15 by remy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	int	character;

	if (nb <= -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(nb * -1, fd);
		return ;
	}
	if (nb < 10)
	{
		character = 48 + nb;
		write(fd, &character, 1);
		return ;
	}
	character = 48 + nb % 10;
	ft_putnbr_fd(nb / 10, fd);
	write(fd, &character, 1);
}
