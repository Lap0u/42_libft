/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaurai <cbeaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 23:16:46 by cbeaurai          #+#    #+#             */
/*   Updated: 2020/11/19 19:07:50 by cbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	char *s1_prim;
	char *s2_prim;

	s1_prim = (char*)s1;
	s2_prim = (char*)s2;

	i = 0;
	while (i < n)
	{
		if (s1_prim[i] != s2_prim[i])
			return (s1_prim[i] - s2_prim[i]);
		i++;
	}
	return (0);
}
