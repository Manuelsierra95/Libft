/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msierra- <msierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:23:58 by msierra-          #+#    #+#             */
/*   Updated: 2021/09/18 17:12:02 by msierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	count;

	count = ft_strlen(s);
	if (c == 0)
		return ((char *)&s[count]);
	while (count >= 0)
	{
		if (s[count] == (char)c)
		{
			s = s + count;
			return ((char *)s);
		}
		count--;
	}
	return (NULL);
}
