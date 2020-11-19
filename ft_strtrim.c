/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaurai <cbeaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 23:22:00 by cbeaurai          #+#    #+#             */
/*   Updated: 2020/11/19 01:24:27 by cbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_check_str(const char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		ft_char_count(const char *s1, const char *set)
{
	int start;
	int end;

	start = 0;
	end = 0;
	while (ft_check_str(set, s1[start]) && s1[start])
		start++;
	while (s1[end])
		end++;
	while (ft_check_str(set, s1[start]) && end >= 0)
		end--;
	return (end - start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		i;
	char	*news;

	start = 0;
	i = 0;
	if (!(news = malloc(sizeof(char) * ft_char_count(s1, set) + 1)))
		return (NULL);
	while (ft_check_str(set, s1[start]) && s1[start])
		start++;
	while (i < ft_char_count(s1, set))
	{
		news[i] = s1[start + i];
		i++;
	}
	news[i] = '\0';
	return (news);
}