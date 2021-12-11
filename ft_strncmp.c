/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckandy <ckandy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:53:32 by ckandy            #+#    #+#             */
/*   Updated: 2021/10/21 15:31:58 by ckandy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*x1;
	unsigned char	*x2;

	x1 = (unsigned char *)s1;
	x2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((x1[i] || x2[i]) && i < n - 1)
	{
		if (x1[i] > x2[i])
			return (1);
		else if (x1[i] < x2[i])
			return (-1);
		else if (x1[i] == '\0')
			return (-1);
		else if (x2[i] == '\0')
			return (1);
		i++;
	}
	return (x1[i] - x2[i]);
}
