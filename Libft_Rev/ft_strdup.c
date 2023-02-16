/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 18:29:27 by manaveti          #+#    #+#             */
/*   Updated: 2023/01/28 18:48:57 by manaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*buff;
	size_t	len;
	char	*b;

	len = ft_strlen(s1);
	buff = (char *)malloc(len + 1);
	b = buff;
	while (len--)
		*(buff++) = *((char *)s1++);
	*buff = '\0';
	return (b);
}
