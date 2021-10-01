/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msierra- <msierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:23:47 by msierra-          #+#    #+#             */
/*   Updated: 2021/09/21 18:50:09 by msierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	a = 0;
	if (len_dst >= dstsize)
		return (dstsize + len_src);
	while (src[a] && (a + len_dst) < (dstsize - 1))
	{
		dst[a + len_dst] = src[a];
		a++;
	}
	dst[a + len_dst] = '\0';
	return (len_src + len_dst);
}
