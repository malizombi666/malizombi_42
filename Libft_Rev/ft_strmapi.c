/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:27:23 by manaveti          #+#    #+#             */
/*   Updated: 2023/02/02 18:08:55 by manaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dup;
	unsigned int	index;

	dup = ft_strdup(s);
	index = 0;
	while (dup && dup[index] && index < ft_strlen(s))
	{
		dup[index] = f(index, dup[index]);
		index++;
	}
	return (dup);
}
