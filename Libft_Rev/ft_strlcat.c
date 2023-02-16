/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:14:16 by manaveti          #+#    #+#             */
/*   Updated: 2023/02/01 16:09:11 by manaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*cast(const char *a)
{
	char	*b;

	b = (char *)a;
	return (b);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*d;
	char	*s;
	size_t	remaining;
	size_t	dlen;

	remaining = dstsize;
	d = dst;
	s = cast(src);
	while (remaining-- != 0 && *d)
		d++;
	dlen = d - dst;
	remaining = dstsize - dlen;
	if (remaining == 0)
		return (ft_strlen(src) + dlen);
	while (*s)
	{
		if (remaining != 1)
		{
			*d++ = *s;
			remaining--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}
/*int main() {
    // Write C code here
    char s1o[30] = "hello";
    char s2o[] = "wowowow";
	char s1m[30] = "hello";
	char s2m[] = "wowowow";
	printf("strlen og buf ->> %zu, riginal ->> %s \n mane ->> %s \n",
	ft_strlen(s1m), s1o, s1m);
	strlcat(s1o, s2o, 3);
	ft_strlcat(s1m, s2m, 3);
    printf("original ->> %zu ' ' %s \n mane ->> %zu ' '  %s \n",
	strlcat(s1o, s2o, 3), s1o, ft_strlcat(s1m, s2m, 3),  s1m);

    return 0;
}*/
