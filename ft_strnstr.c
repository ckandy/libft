/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckandy <ckandy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:54:32 by ckandy            #+#    #+#             */
/*   Updated: 2021/10/21 21:09:11 by ckandy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[j])
			k = i;
		while (haystack[i] == needle[j] && haystack[i] != '\0' && len > i)
		{
			i++;
			j++;
		}
		if (j == ft_strlen(needle))
			return ((char *)haystack + k);
		if (j > 0)
			i = k + 1;
		else
			i++;
	}
	return (NULL);
}
