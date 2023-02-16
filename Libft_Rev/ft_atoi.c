/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 18:21:24 by manaveti          #+#    #+#             */
/*   Updated: 2023/01/28 15:25:44 by manaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*cast(const char *a)
{
	char	*b;

	b = (char *)a;
	return (b);
}

int	ft_atoi(const char *str)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while (*cast(str) == 32 || (*cast(str) <= 13 && *cast(str) >= 9))
		str++;
	if (*cast(str) == '-' || *cast(str) == '+')
	{
		if (*cast(str) == '-')
			sign *= (-1);
		str++;
	}
	while (*cast(str) <= '9' && *cast(str) >= '0')
	{
		num = 10 * num + (*cast(str) - 48);
		str++;
	}
	return (sign * num);
}

/*int main()
{
	const char s[] = "-1";
	printf ("atoi ins ->> %d\n", ft_atoi(s));
	return 0;
}*/
