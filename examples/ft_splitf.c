/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodet <rgodet@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 09:58:23 by rgodet            #+#    #+#             */
/*   Updated: 2025/03/26 10:04:47 by rgodet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

//
// Compile with:
// gcc ft_splitf.c -L.. -lft
//

int main(void)
{
    char    **split;
    int     i;

    split = ft_splitf("Hello,world!\nHowyou?", ft_isspace);
    i = 0;
    while (split[i] != NULL)
    {
        printf("Split[%d]: %s\n", i, split[i]);
        free(split[i]);
        i++;
    }
    free(split);
    return (0);
}