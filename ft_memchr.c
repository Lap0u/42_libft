/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaurai <cbeaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 23:16:33 by cbeaurai          #+#    #+#             */
/*   Updated: 2020/11/23 00:10:52 by cbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_prim;

	s_prim = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (s_prim[i] == c)
			return ((void*)s + i);
		i++;
	}
	return (NULL);
}
