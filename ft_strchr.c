/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msierra- <msierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:31:30 by msierra-          #+#    #+#             */
/*   Updated: 2021/09/18 17:11:06 by msierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = ft_strlen(s);
	while (i <= count)
	{
		if (s[i] == (char)c)
		{
			s = s + i;
			return ((char *)s);
		}
		i++;
	}
	return (NULL);
}
