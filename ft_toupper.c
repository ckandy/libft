/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckandy <ckandy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 13:43:13 by ckandy            #+#    #+#             */
/*   Updated: 2021/10/17 05:57:02 by ckandy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int x)
{
	if (x >= 'a' && x <= 'z')
		x -= 32;
	return (x);
}
