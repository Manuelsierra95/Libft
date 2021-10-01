/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msierra- <msierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:13:17 by msierra-          #+#    #+#             */
/*   Updated: 2021/09/21 16:09:31 by msierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	index;

	count = 0;
	index = 0;
	while (src[count])
		count++;
	if (dstsize != 0)
	{
		while (src[index] && index < (dstsize - 1))
		{
			dst[index] = src[index];
			index++;
		}
		dst[index] = '\0';
	}
	return (count);
}
