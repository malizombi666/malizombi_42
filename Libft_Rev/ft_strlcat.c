/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:14:16 by manaveti          #+#    #+#             */
/*   Updated: 2023/02/17 18:48:21 by manaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

/*char	*cast(const char *a)
{
	char	*b;

	b = (char *)a;
	return (b);
}*/

/*size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t remaining;

	if (dst == NULL || src == NULL)
		return (0);
	remaining = dstsize - ft_strlen(dst);
	if (remaining == 0)
		return (ft_strlen(src) + ft_strlen(dst));
	ft_strlcpy(dst + ft_strlen(dst), src, remaining);
	return (ft_strlen(dst) + ft_strlen(src));
}*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*d;
	char	*s;
	size_t	remaining;
	size_t	dlen;

	if (dst == NULL || src == NULL)
		return (0);
	remaining = dstsize;
	d = dst;
	s = cast(src) - 1;
	while (remaining-- && *d)
		d++;
	dlen = d - dst;
	remaining = dstsize - dlen;
	if (remaining == 0)
		return (ft_strlen(src) + dlen);
	while (remaining-- != 1 && *(++s))
		*d++ = *s;
	*d = '\0';
	return (dlen + ft_strlen(src));
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
