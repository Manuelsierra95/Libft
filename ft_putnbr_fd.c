/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msierra- <msierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 15:56:13 by msierra-          #+#    #+#             */
/*   Updated: 2021/09/23 12:59:35 by msierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_is_sign(int n);

void	ft_putnbr_fd(int n, int fd)
{
	char	a[12];
	size_t	num;
	size_t	i;

	i = 10;
	ft_bzero(a, 12);
	num = ft_is_sign(n);
	if (n < 0)
		write(fd, "-", 1);
	while (num >= 10)
	{
		a[i] = num % 10 + '0';
		num = num / 10;
		i--;
	}
	a[i] = num + '0';
	i = 0;
	while (a[i] == '\0')
		i++;
	while (a[i])
	{
		write(fd, &a[i], 1);
		i++;
	}
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
