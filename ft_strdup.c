/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckandy <ckandy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:47:52 by ckandy            #+#    #+#             */
/*   Updated: 2021/10/20 09:45:28 by ckandy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*z;

	i = 0;
	while (s1[i])
		i++;
	z = (char *)malloc((i + 1) * sizeof(char));
	if (!z)
		return (0);
	i = 0;
	while (s1[i])
	{
		z[i] = s1[i];
		i++;
	}
	z[i] = '\0';
	return (z);
}
