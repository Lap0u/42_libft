/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaurai <cbeaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 23:17:02 by cbeaurai          #+#    #+#             */
/*   Updated: 2020/11/19 23:12:32 by cbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dst_prim;
	char	*src_prim;

	src_prim = (char*)src;
	dst_prim = (char*)dst;
	i = 0;
	while (i < n)
	{
		dst_prim[i] = src_prim[i];
		i++;
	}
	return (dst);
}
