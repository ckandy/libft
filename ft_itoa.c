/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckandy <ckandy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:29:59 by ckandy            #+#    #+#             */
/*   Updated: 2021/10/28 11:07:58 by ckandy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counter(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

static int	ft_check(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	size_t	count;
	char	*myitoa;

	count = ft_counter(n);
	myitoa = (char *)malloc(sizeof(char) * (count + 1));
	if (!myitoa)
		return (NULL);
	myitoa[count] = '\0';
	if (n < 0)
		myitoa[0] = '-';
	if (n == 0)
		myitoa[0] = '0';
	while (n != 0)
	{
		count--;
		myitoa[count] = ft_check(n % 10) + 48;
		n = n / 10;
	}
	return (myitoa);
}
