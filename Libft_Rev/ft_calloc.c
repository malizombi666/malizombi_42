/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 20:13:17 by manaveti          #+#    #+#             */
/*   Updated: 2023/02/20 17:01:53 by manaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*buffer;

	if (size && SIZE_MAX / size < count)
		return (NULL);
	buffer = malloc(count * size);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, count * size);
	return (buffer);
}