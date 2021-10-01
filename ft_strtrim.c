/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msierra- <msierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:50:54 by msierra-          #+#    #+#             */
/*   Updated: 2021/09/23 13:00:27 by msierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_mallocsize(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*a;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!s1 || !set)
		return (NULL);
	if (ft_mallocsize(s1, set) < 0)
	{
		a = malloc(1 * sizeof(char));
		if (!a)
			return (NULL);
		a[0] = '\0';
		return (a);
	}
	a = malloc((ft_mallocsize(s1, set) + 1) * sizeof(char));
	if (!a)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j < ft_mallocsize(s1, set))
		a[j++] = s1[i++];
	a[j] = '\0';
	return (a);
}

static int	ft_mallocsize(char const *s1, char const *set)
{
	int	i;
	int	str;

	str = 0;
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
	{
		str++;
		i++;
	}
	i = ft_strlen(s1) - 1;
	while (i >= 0 && ft_strchr(set, s1[i]))
	{
		str++;
		i--;
	}
	return (ft_strlen(s1) - str);
}
