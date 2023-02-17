/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 18:27:21 by manaveti          #+#    #+#             */
/*   Updated: 2023/01/28 18:25:18 by manaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t num_bytes)
{
	char	*to1;
	char	*from1;

	if (to == NULL || from == NULL)
		return (to);
	to1 = (char *)to;
	from1 = (char *)from;
	while (num_bytes--)
		*(to1++) = *(from1++);
	return (to);
}
