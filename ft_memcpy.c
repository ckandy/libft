/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckandy <ckandy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:42:40 by ckandy            #+#    #+#             */
/*   Updated: 2021/10/24 15:39:50 by ckandy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*x;
	unsigned char	*z;

	x = (unsigned char *)src;
	z = (unsigned char *)dst;
	i = 0;
	if (src == NULL && dst == NULL)
		return (NULL);
	while (n-- != 0)
		*z++ = *x++;
	return (dst);
}
