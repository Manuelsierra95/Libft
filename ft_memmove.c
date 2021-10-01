/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msierra- <msierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 12:18:05 by msierra-          #+#    #+#             */
/*   Updated: 2021/09/21 16:08:49 by msierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (0);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (i < len)
		{
			*((char *)dst + (len - 1) - i) = *((char *)src + (len - 1) - i);
			i++;
		}
	}
	return (dst);
}
