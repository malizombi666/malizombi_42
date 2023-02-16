/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 20:13:17 by manaveti          #+#    #+#             */
/*   Updated: 2023/02/09 16:54:27 by manaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*buffer;
	int		bytes;
	void	*b;

	bytes = count * size;
	if (bytes >= __INT_MAX__ || size == SIZE_MAX || count == SIZE_MAX)
		return (0);
	buffer = malloc(bytes);
	if (buffer)
	{
		b = buffer;
		while (bytes--)
			*(buffer++) = '\0';
		return (b);
	}
	return (0);
}
