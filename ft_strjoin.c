/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaurai <cbeaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 23:19:03 by cbeaurai          #+#    #+#             */
/*   Updated: 2020/11/19 18:00:30 by cbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*news;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (!(news = malloc(sizeof(char) * (j + i + 1))))
		return (NULL);
	i = -1;
	j = -1;
	while (s1[++i])
		news[i] = s1[i];
	while (s2[++j])
		news[i + j] = s2[j];
	news[j + i] = '\0';
	return (news);
}
