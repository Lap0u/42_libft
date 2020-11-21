/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaurai <cbeaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 23:17:19 by cbeaurai          #+#    #+#             */
/*   Updated: 2020/11/21 17:48:37 by cbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*dst_prim;
	char	*src_prim;

	src_prim = (char*)src;
	dst_prim = (char*)dst;
	i = 0;
	if (!dst || !src || dst == src)
		return (dst);
	if (&dst_prim[i] > &src_prim[i])
	{
		i = len - 1;
		while (i >= 0)
		{
			dst_prim[i] = src_prim[i];
			i--;
		}
	}
	else
		while (i < (int)len)
		{
			dst_prim[i] = src_prim[i];
			i++;
		}
	return (dst);
}
