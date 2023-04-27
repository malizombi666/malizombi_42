/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:46:58 by manaveti          #+#    #+#             */
/*   Updated: 2023/02/13 20:55:31 by manaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_front(t_list **lst, t_list *n)
{
	t_list	*tmp;

	if (!lst)
		return ;
	tmp = *lst;
	*lst = n;
	(*n).next = tmp;
}
