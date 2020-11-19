/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaurai <cbeaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 23:16:22 by cbeaurai          #+#    #+#             */
/*   Updated: 2020/11/19 19:07:27 by cbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;
	char *src_prim;

	src_prim = (char*)src;
	i = 0;
	while (i < n)
	{
		if (src_prim[i] == c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
