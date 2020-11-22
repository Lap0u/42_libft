/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaurai <cbeaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 23:16:22 by cbeaurai          #+#    #+#             */
/*   Updated: 2020/11/23 00:12:02 by cbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*src_prim;
	unsigned char	*dst_prim;

	dst_prim = (unsigned char*)dst;
	src_prim = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		dst_prim[i] = src_prim[i];
		if (src_prim[i] == c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
