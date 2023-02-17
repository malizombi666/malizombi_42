/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:10:55 by manaveti          #+#    #+#             */
/*   Updated: 2023/02/01 19:56:12 by manaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	i;
	size_t	slen;
	char	*sr;

	if (s == NULL)
		return (0);
	sr = (char *)s;
	i = 0;
	while (sr[i] && ft_strchr(set, sr[i]))
		i++;
	slen = ft_strlen(s);
	while (slen && ft_strchr(set, sr[slen]))
		slen--;
	return (ft_substr(s, i, slen - i + 1));
}

/*int main()
{
	char const s[] = "123123gjdjhgfjgh2332323";
		char const set[] = "123";
	printf("result ->> %s\n", ft_strtrim(s, set));
	return 0;
}*/
