/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msierra- <msierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 10:50:07 by msierra-          #+#    #+#             */
/*   Updated: 2021/09/23 12:59:09 by msierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_size(int n);
static unsigned int	ft_is_sign(int n);

char	*ft_itoa(int n)
{
	char			*a;
	unsigned int	num;
	size_t			size;

	num = ft_is_sign(n);
	size = ft_size(n);
	a = (char *)malloc((size + 1) * sizeof(char));
	if (!a)
		return (0);
	a[size--] = '\0';
	while (num >= 10)
	{
		a[size] = num % 10 + '0';
		num = num / 10;
		size--;
	}
	a[size--] = num + '0';
	if (n < 0)
		a[size] = '-';
	return (a);
}

static int	ft_size(int n)
{
	size_t	size;

	if (n > 0)
		size = 0;
	else
		size = 1;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static unsigned int	ft_is_sign(int n)
{
	unsigned int	num;

	if (n > 0)
		num = n;
	else
		num = n * -1;
	return (num);
}
