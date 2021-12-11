/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckandy <ckandy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:43:42 by ckandy            #+#    #+#             */
/*   Updated: 2021/10/17 05:51:50 by ckandy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*l;
	size_t			i;

	i = 0;
	l = b;
	while (i < len && len > 0)
	{
		l[i] = c;
		i++;
	}
	return (b);
}
