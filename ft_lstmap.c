/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 01:00:00 by rgodet            #+#    #+#             */
/*   Updated: 2024/10/21 10:04:13 by rgodet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*error_handling(t_list *res, void (*del)(void *), void *content)
{
	del(content);
	if (res != NULL)
		ft_lstclear(&res, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*temp;
	void	*content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	content = f(lst->content);
	res = ft_lstnew(content);
	if (!res)
		return (error_handling(0, del, content));
	lst = lst->next;
	while (lst)
	{
		content = f(lst->content);
		temp = ft_lstnew(content);
		if (!temp)
			return (error_handling(res, del, content));
		ft_lstadd_back(&res, temp);
		lst = lst->next;
	}
	return (res);
}
