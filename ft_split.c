/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaurai <cbeaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 23:18:36 by cbeaurai          #+#    #+#             */
/*   Updated: 2020/11/20 21:31:16 by cbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_len_next_sep(const char *str, char c, int start)
{
	int i;

	i = 0;
	while (str[i + start] != c && str[i + start])
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
		if (s[i] != c && s[i])
		{
			cmpt++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			while (s[i] == c && s[i])
				i++;
	}
	return (cmpt);
}

int		ft_set_next(const char *s, char c, int i)
{
	while (s[i] == c && s[i])
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
	if (!(news = malloc(sizeof(char*) * (ft_word_count(s, c) + 1))))
		return (NULL);
	while (j < ft_word_count(s, c) && ft_word_count(s, c) != 0)
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
	return (news);
}
/*
int main()
{
	char **s;
	char sep = 'm';
	char *s1;

	s1 = "azejazeazi";
	s = ft_split(s1, sep);
	return (0);
}*/
