/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckandy <ckandy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:43:06 by ckandy            #+#    #+#             */
/*   Updated: 2021/10/21 14:33:17 by ckandy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*x;
	unsigned char	*z;

	x = (unsigned char *)dst;
	z = (unsigned char *)src;
	if (z == NULL && x == NULL)
		return (NULL);
	if (x <= z || x >= (z + len))
	{
		while (len--)
			*x++ = *z++;
	}
	else
	{
		x = x + len - 1;
		z = z + len - 1;
		while (len--)
			*x-- = *z--;
	}
	return (dst);
}
