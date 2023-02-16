/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:55:10 by manaveti          #+#    #+#             */
/*   Updated: 2023/01/28 16:28:35 by manaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen (str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i--;
	}
	return (0);
}
	/*char	*runner;

	runner = (char *)str;
	while (*runner)
	{
		runner++;
	}
	while (*runner != c && runner >= (char *)str)
	{
		runner--;
	}
	if (runner == str && *(char *)str !=(char)c)
	{
		return (0);
	}
	return (runner);*/
