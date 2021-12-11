/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckandy <ckandy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:25:10 by ckandy            #+#    #+#             */
/*   Updated: 2021/10/21 13:38:44 by ckandy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*x;
	size_t	j;

	j = size * count;
	x = (void *)malloc(j);
	if (!x)
		return (NULL);
	ft_bzero(x, j);
	return (x);
}
