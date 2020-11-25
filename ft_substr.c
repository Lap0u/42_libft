/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaurai <cbeaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 23:22:11 by cbeaurai          #+#    #+#             */
/*   Updated: 2020/11/25 01:02:02 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*news;

	i = 0;
	if (start >= (unsigned int)ft_strlen(s))
	{
		if (!(news = malloc(sizeof(char))))
			return (NULL);
		news[0] = '\0';
		return (news);
	}
	while (s[i] && i < len + start)
		i++;
	if (i - start < len)
		len = i - start;
	if (!(news = malloc(sizeof(char) * len + 1)))
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
