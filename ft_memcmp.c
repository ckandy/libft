/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckandy <ckandy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:41:45 by ckandy            #+#    #+#             */
/*   Updated: 2021/10/19 08:34:54 by ckandy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*x;
	unsigned char	*z;
	size_t			i;

	i = 0;
	x = (unsigned char *)s1;
	z = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (x[i] != z[i])
			return (x[i] - z[i]);
		i++;
	}
	return (0);
}
