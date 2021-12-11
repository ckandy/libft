/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckandy <ckandy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:34:51 by ckandy            #+#    #+#             */
/*   Updated: 2021/10/30 03:54:07 by ckandy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*mylst;

	if (!lst || !new)
		return ;
	mylst = *lst;
	if (!mylst)
		*lst = new;
	else
	{
		mylst = ft_lstlast(*lst);
		(mylst)->next = new;
	}
}
