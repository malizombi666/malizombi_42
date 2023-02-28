/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:14:47 by manaveti          #+#    #+#             */
/*   Updated: 2023/02/01 18:05:36 by manaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*runner;

	if (str == NULL)
		return (0);
	runner = (char *)str;
	if (c != '\0')
	{
		while (*runner && *runner != (char)c)
		{
			runner++;
		}
		if (*runner)
		{
			return (runner);
		}
		return (0);
	}
	while (*runner)
		runner++;
	return (runner);
}
