/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:29:49 by manaveti          #+#    #+#             */
/*   Updated: 2023/02/14 16:49:50 by manaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *n)
{
	t_list	*last;

	if (!(*lst))
	{
		*lst = n;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = n;
	n->next = NULL;
}
