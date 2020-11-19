/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaurai <cbeaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 23:17:19 by cbeaurai          #+#    #+#             */
/*   Updated: 2020/11/19 23:11:05 by cbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst_prim;
	char	*src_prim;

	src_prim = (char*)src;
	dst_prim = (char*)dst;
	i = 0;
	if (&dst_prim[i] > &src_prim[i])
	{
		len -= 1;
		while (len >= 0)
		{
			dst_prim[len] = src_prim[len];
			len--;
		}
	}
	else
		while (i < len)
		{
			dst_prim[i] = src_prim[i];
			i++;
		}
	return (dst);
}
