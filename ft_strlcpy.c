/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remy <rgodet@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:32:48 by remy              #+#    #+#             */
/*   Updated: 2024/10/11 12:22:11 by remy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlcpy(char *dst, const char *src, t_size size)
{
	t_size i;

	i = 0;
	if (size > 0) {
		while (src[i] && i < size - 1) {
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (ft_strlen(src));
}

/*int main()
{
	char dst[] = "";
	char src[] = "Hello world !";
	int res = ft_strlcpy(dst, src, 5);
	printf("%d - %s", res, dst);
}*/