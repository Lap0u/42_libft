/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaurai <cbeaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 23:22:11 by cbeaurai          #+#    #+#             */
/*   Updated: 2020/11/19 01:25:38 by cbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*news;

	i = 0;
	while (s[i])
		i++;
	if (!(news = malloc(sizeof(char) * (i - start) + 1)))
		return (NULL);
	while (i < len && s[i + start])
	{
		news[i] = s[i + start];
		i++;
	}
	return (news);
}
