/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msierra- <msierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:29:34 by msierra-          #+#    #+#             */
/*   Updated: 2021/09/21 18:27:52 by msierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*a;
	size_t	size;

	size = ft_strlen(s1) + 1;
	a = malloc(size * sizeof(char));
	if (!a)
		return (NULL);
	ft_memcpy(a, s1, size);
	return (a);
}
