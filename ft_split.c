/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaurai <cbeaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 23:18:36 by cbeaurai          #+#    #+#             */
/*   Updated: 2020/11/19 01:09:39 by cbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_len_next_sep(const char *str, char c, int start)
{
	int i;

	while (str[i + start] != c)
		i++;
	return (i);
}

int		ft_word_count(char const *s, char c)
{
	int i;
	int cmpt;

	cmpt = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			cmpt++;
			while (s[i] != c)
				i++;
		}
		else
			while (s[i] == c)
				i++;
	}
	return (cmpt);
}

int		ft_set_next(const char *s, char c, int i)
{
	while (s[i] == c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**news;
	int		i;
	int		j;
	int		cmpt;

	i = 0;
	j = 0;
	if (!(news = malloc(sizeof((char*)* ft_word_count(s, c) + 1))))
		return (NULL);
	while (j < ft_word_count(s, c))
	{
		i = ft_set_next(s, c, i);
		if (!(news[j] = malloc(sizeof(char) * ft_len_next_sep(s, c, i) + 1)))
			return (NULL);
		cmpt = 0;
		while (cmpt < ft_len_next_sep(s, c, i))
		{
			news[j][cmpt] = s[cmpt + i];
			cmpt++;
		}
		i += cmpt;
		news[j++][cmpt] = '\0';
	}
	news[j][0] = '\0';
	return (news);
}
