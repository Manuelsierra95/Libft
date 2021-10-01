/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msierra- <msierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:09:58 by msierra-          #+#    #+#             */
/*   Updated: 2021/09/22 15:46:58 by msierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;

	if (!s1 || !s2)
		return (NULL);
	a = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!a)
		return (NULL);
	ft_memcpy(a, s1, ft_strlen(s1));
	ft_memcpy(a + ft_strlen(s1), s2, ft_strlen(s2));
	a[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (a);
}
