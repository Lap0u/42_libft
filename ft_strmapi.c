/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaurai <cbeaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 01:12:46 by cbeaurai          #+#    #+#             */
/*   Updated: 2020/11/19 01:13:14 by cbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(const char *str)
{
	int i;

	while (str[i])
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*news;
	int		i;

	i = 0;
	if (!(news = malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	while (i < ft_strlen(s))
	{
		news[i] = f(i, s[i]);
		i++;
	}
	news[i] = '\0';
	return (NULL);
}
