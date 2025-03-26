/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_straddchar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodet <rgodet@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 13:32:19 by rgodet            #+#    #+#             */
/*   Updated: 2025/03/26 13:35:10 by rgodet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_straddchar(char *str, char c)
{
	char	*new;
	int		i;

	i = 0;
	if (str == NULL)
	{
		new = ft_calloc(2, sizeof(char));
		if (new == NULL)
			return (NULL);
		new[0] = c;
		new[1] = 0;
		return (new);
	}
	new = ft_calloc(ft_strlen(str) + 2, sizeof(char));
	if (new == NULL)
		return (NULL);
	while (str[i] != 0)
	{
		new[i] = str[i];
		i++;
	}
	new[i] = c;
	free(str);
	return (new);
}
