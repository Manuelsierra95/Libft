/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msierra- <msierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:29:13 by msierra-          #+#    #+#             */
/*   Updated: 2021/09/24 17:15:56 by msierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*supr;

	if (!(*lst))
		return ;
	while (*lst)
	{
		supr = (*lst)->next;
		del((*lst)->content);
		free((*lst));
		(*lst) = supr;
	}
	*lst = NULL;
}
