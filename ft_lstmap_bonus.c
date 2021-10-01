/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msierra- <msierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:59:38 by msierra-          #+#    #+#             */
/*   Updated: 2021/09/26 13:49:50 by msierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nxt;
	t_list	*list;

	if (!lst)
		return (0);
	nxt = 0;
	while (lst)
	{
		list = ft_lstnew(f(lst->content));
		if (!list)
		{
			ft_lstclear(&lst, del);
			return (0);
		}
		ft_lstadd_back(&nxt, list);
		lst = lst->next;
	}
	return (nxt);
}
