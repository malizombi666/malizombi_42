/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:17:09 by manaveti          #+#    #+#             */
/*   Updated: 2023/02/02 17:15:40 by manaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*cast(const char *a)
{
	char	*b;

	b = (char *)a;
	return (b);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;

	if (dst == NULL || src == NULL)
		return (0);
	i = 0;
	if (dsize != 0)
	{
		while (i + 1 < dsize && cast(src)[i])
		{
			dst[i] = cast(src)[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*int main() {
    // Write C code here
    char d1[10] = "hello";
    char s1[] = "world";
	char d2[] = "hello";
	char s2[] = "world";
	strlcpy(d1, s1, 4);
	ft_strlcpy(d2, s2, 4);

    printf("original ->> %s and %zu \n mane ->> %s and %zu \n", 
	d1, strlcpy(d1, s1, 3), d2, ft_strlcpy(d2, s2, 3));

    return 0;
}*/
