/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckandy <ckandy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:56:03 by ckandy            #+#    #+#             */
/*   Updated: 2021/10/24 21:18:42 by ckandy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	ln;
	char	*x;

	i = 0;
	if (!s)
		return (NULL);
	ln = ft_strlen(s);
	if (len > ln)
		len = ln;
	x = (char *)malloc(len + 1);
	if (!(x))
		return (NULL);
	if (start <= ln)
	{
		while (i < len && s[i])
			x[i++] = s[start++];
	}
	x[i] = '\0';
	return (x);
}
