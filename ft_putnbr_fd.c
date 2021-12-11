/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckandy <ckandy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 00:29:29 by ckandy            #+#    #+#             */
/*   Updated: 2021/10/28 14:34:46 by ckandy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr(int num, int ret)
{
	int		devide;
	int		modulos;
	char	x;

	devide = num / 10;
	modulos = num % 10;
	if (devide != 0)
		ft_putnbr(devide, ret);
	x = modulos + '0';
	ft_putchar_fd(x, ret);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n != 0)
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			if (n == -2147483648)
			{
				n = (n / 10) * -1;
				ft_putnbr(n, fd);
				ft_putchar_fd('8', fd);
			}
			else
			{
				n = -n;
				ft_putnbr(n, fd);
			}
		}
		else
			ft_putnbr(n, fd);
	}
	else
		ft_putchar_fd('0', fd);
}
