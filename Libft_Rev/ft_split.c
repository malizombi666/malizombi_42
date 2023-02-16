/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 20:25:13 by manaveti          #+#    #+#             */
/*   Updated: 2023/02/08 20:31:52 by manaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	beam(char x, char ch)
{
	if (x != ch)
		return (1);
	return (0);
}

void	shifter(char const **txt, unsigned int i)
{
	*txt = *txt + i;
	return ;
}

unsigned int	ft_count(const char *str, char c)
{
	unsigned int	i;
	unsigned int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && !beam(str[i], c))
			i++;
		if (!str[i])
			return (count);
		while (str[i] && beam(str[i], c))
			i++;
		count++;
	}
	return (count);
}

char	*cutter(char const **text, char c)
{
	unsigned int		i;
	unsigned int		start;
	unsigned long		end;
	char				*word;

	i = 0;
	while ((*text)[i] && !beam((*text)[i], c))
		i++;
	if (!(*text)[i])
		end = i - 1;
	start = i;
	while ((*text)[i] && beam((*text)[i], c))
		i++;
	end = i;
	word = ft_substr(*text, start, end - start);
	shifter(text, i);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	count;
	char			**drevo;
	unsigned int	i;

	i = 0;
	count = ft_count(s, c);
	drevo = malloc((count + 1) * sizeof(char *));
	if (!drevo)
		return (0);
	drevo[count] = 0;
	while (i < count)
	{
		drevo[i] = cutter(&s, c);
		i++;
	}
	return (drevo);
}
