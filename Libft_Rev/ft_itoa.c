    /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 20:07:54 by manaveti          #+#    #+#             */
/*   Updated: 2023/02/08 20:13:57 by manaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	karg(int a)
{
	int	l;

	if (a == 0)
		return (1);
	l = 0;
	while (a)
	{
		a = a / 10;
		l++;
	}
	return (l);
}

char	*placefor(int n)
{
	char	*buff;
	int		len;

	len = karg(n) + 1;
	if (n < 0)
		len = len + 1;
	buff = malloc(len);
	if (!buff)
		return (0);
	buff[len - 1] = '\0';
	if (n < 0)
		buff[0] = '-';
	return (buff + len - 2);
}

char	*ft_itoa(int n)
{
	char		*b;
	int			k;
	long int	n0;

	n0 = n;
	b = placefor((int)n0);
	k = karg(n);
	if (n0 < 0)
		n0 = -n0;
	while (k--)
	{
		*(b--) = n0 % 10 + 48;
		n0 = n0 / 10;
	}
	if (n >= 0)
		return (b + 1);
	return (b);
}
