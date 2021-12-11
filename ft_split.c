/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckandy <ckandy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:46:29 by ckandy            #+#    #+#             */
/*   Updated: 2021/10/28 03:28:57 by ckandy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_free(char **arr, int i)
{
	while (i--)
		free(arr[i]);
	return (-1);
}

static int	ft_words_count(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (!(s[i] == c || s[i] == '\0') && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static void	ft_write_word(char *arr, const char *s, char c)
{
	int	i;

	i = 0;
	while ((s[i] == c || s[i] == '\0') == 0)
	{
		arr[i] = s[i];
		i++;
	}
	arr[i] = '\0';
}

static int	ft_my_spliton(char **arr, const char *s, char c)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] == c || s[i] == '\0'))
			i++;
		else
		{
			j = 0;
			while (!(s[i + j] == c || s[i + j] == '\0'))
				j++;
			arr[word] = (char *)malloc(sizeof(char) * (j + 1));
			if (!arr[word])
				return (ft_free(arr, word - 1));
			ft_write_word(arr[word], s + i, c);
			i += j;
			word++;
		}
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**splitus;
	int		count;

	if (!s)
		return (0);
	count = ft_words_count(s, c);
	splitus = (char **)malloc(sizeof(char *) * (count + 1));
	if (!splitus)
		return (NULL);
	splitus[count] = 0;
	if (ft_my_spliton(splitus, s, c) == -1)
		return (0);
	return (splitus);
}
