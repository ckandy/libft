/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckandy <ckandy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:57:13 by ckandy            #+#    #+#             */
/*   Updated: 2021/10/24 21:19:32 by ckandy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_char(char const *x, char z)
{
	size_t	i;

	i = 0;
	while (x[i])
	{
		if (x[i] == z)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trims;
	size_t	i;
	size_t	last;
	size_t	start;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_check_char(set, s1[start]))
		start++;
	last = ft_strlen(s1);
	while (last > start && ft_check_char(set, s1[last - 1]))
		last--;
	trims = (char *)malloc(sizeof(char) * (last - start + 1));
	if (!trims)
		return (NULL);
	i = 0;
	while (start < last)
		trims[i++] = s1[start++];
	trims[i] = '\0';
	return (trims);
}
