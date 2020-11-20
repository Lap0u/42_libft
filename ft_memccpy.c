/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaurai <cbeaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 23:16:22 by cbeaurai          #+#    #+#             */
/*   Updated: 2020/11/20 13:03:45 by cbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*src_prim;
	char	*dst_prim;

	dst_prim = (char*)dst;
	src_prim = (char*)src;
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
