/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:59:22 by manaveti          #+#    #+#             */
/*   Updated: 2023/01/28 21:55:38 by manaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/
#include "libft.h"

/*char	*cast(const char *a)
{
	char	*b;

	b = (char *) a;
	return (b);
}*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n_len;
	char	*str;
	char	*ned;

	if (haystack == NULL || needle == NULL)
		return (0);
	str = (char *)haystack;
	ned = (char *)needle;
	i = 0;
	n_len = ft_strlen(ned);
	while (n_len + i <= len && str[i])
	{
		if (!ft_strncmp(str + i, ned, n_len))
			return (str + i);
		i++;
	}
	if (*ned == '\0')
		return (str);
	return (0);
}
/*
int main() 

 {
    char s1[] = "Shine on you crazy";
    char s2[] = "on";
    printf("original ->> %s \n mane ->> %s", 
		strstr(s1, s2, 10), ft_strnstr(s1, s2, 10));

    return 0;
}*/
