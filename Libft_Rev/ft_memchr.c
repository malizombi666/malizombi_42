/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 18:50:00 by manaveti          #+#    #+#             */
/*   Updated: 2023/01/28 19:39:54 by manaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*run;

	run = (unsigned char *)s;
	if (!s)
		return (0);
	while (n--)
	{
		if (*run == (unsigned char )c)
			return ((void *)run);
		run++;
	}
	return (0);
}
