/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rand.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodet <rgodet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:49:16 by rgodet            #+#    #+#             */
/*   Updated: 2024/12/04 09:57:47 by rgodet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	get_seed(void)
{
	unsigned long	addr;

	addr = (unsigned long)&addr;
	return ((unsigned int)((addr >> 16) ^ addr));
}

static unsigned int	generate_random(void)
{
	static int		seed;
	unsigned int	multiplier;
	unsigned int	increment;
	unsigned int	modulus;

	if (seed == 0)
		seed = get_seed();
	multiplier = 1664525;
	increment = 1013904223;
	modulus = 0xFFFFFFFF;
	seed = ((seed * multiplier + increment) % modulus);
	return (seed);
}

unsigned int	ft_rand(unsigned int min, unsigned int max)
{
	return (min + (generate_random() % (max - min + 1)));
}
