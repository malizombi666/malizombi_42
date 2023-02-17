/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 18:52:00 by manaveti          #+#    #+#             */
/*   Updated: 2023/01/28 18:20:21 by manaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t nmb)
{
	int		dist;
	char	*f;
	char	*t;

	if (to == NULL || from == NULL)
		return (0);
	f = (char *)from;
	t = (char *)to;
	dist = f - t;
	if (dist < 0)
	{
		while (nmb--)
			*(t + nmb) = *(f + nmb);
	}
	else
	{
		while (nmb--)
			*(t++) = *(f++);
	}
	return (to);
}
