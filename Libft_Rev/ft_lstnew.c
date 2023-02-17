/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:09:26 by manaveti          #+#    #+#             */
/*   Updated: 2023/02/13 18:15:02 by manaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*buffer;

	if (content == NULL)
		return (0);
	buffer = malloc(sizeof(t_list));
	if (!buffer)
		return (0);
	(*buffer).content = content;
	(*buffer).next = NULL;
	return (buffer);
}
