/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaurai <cbeaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 23:16:33 by cbeaurai          #+#    #+#             */
/*   Updated: 2020/11/19 23:13:54 by cbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s_prim;

	s_prim = (char*)s;
	i = 0;
	while (i < n)
	{
		if (s_prim[i] == c)
			return ((void*)s + i);
		i++;
	}
	return (NULL);
}
