/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaurai <cbeaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 23:22:11 by cbeaurai          #+#    #+#             */
/*   Updated: 2020/11/21 00:52:52 by cbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*news;

	i = 0;
	if (start > len)
	{
		if (!(news = malloc(sizeof(char) * 1)))
			return (NULL);
		news[0] = '\0';
		return (news);
	}
	while (s[i] && i < len)
		i++;
	if (!(news = malloc(sizeof(char) * (i - start) + 2)))
		return (NULL);
	i = 0;
	while (i < len && s[i + start])
	{
		news[i] = s[i + start];
		i++;
	}
	news[i] = '\0';
	return (news);
}
