/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:32:56 by manaveti          #+#    #+#             */
/*   Updated: 2023/01/31 20:40:26 by manaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buff;
	char	*r1;
	char	*r2;
	size_t	i;
	size_t	j;

	i = 0;
	r1 = (char *)s1;
	r2 = (char *)s2;
	buff = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!buff)
		return (0);
	while (r1[i])
	{
		buff[i] = r1[i];
		i++;
	}
	j = 0;
	while (r2[j])
		buff[i++] = r2[j++];
	buff[i] = '\0';
	return (buff);
}
