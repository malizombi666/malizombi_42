/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 19:54:29 by manaveti          #+#    #+#             */
/*   Updated: 2023/02/09 16:35:25 by manaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdio.h>

void	nbr(int a, int fd)
{
	char	l;
	int		last;

	last = a % 10;
	l = last + 48;
	if (a > 9)
	{
		a = (a - last) / 10;
		nbr(a, fd);
	}
	write (fd, &l, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else if (n < 0)
	{
		n = n * (-1);
		write (fd, "-", 1);
		nbr(n, fd);
	}
	else
		nbr(n, fd);
}
/*int main()
{
	ft_putnbr_fd(-987441, 1);
	printf("int min = %d \n", INT_MIN);
}*/
