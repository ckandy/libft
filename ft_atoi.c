/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckandy <ckandy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:50:59 by ckandy            #+#    #+#             */
/*   Updated: 2021/10/24 15:35:21 by ckandy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define MAX 9223372036854775807

int	ft_atoi(const char *str)
{
	unsigned int		i;
	int					neg;
	unsigned long long	num;

	i = 0;
	num = 0;
	neg = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	if ((num > MAX || (num == MAX && str[i] - '0' > 7)) && neg == 1)
		return (-1);
	if ((num > MAX || (num == MAX && str[i] - '0' > 7)) && neg == -1)
		return (0);
	return ((int)num * neg);
}
