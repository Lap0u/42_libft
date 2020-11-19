/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaurai <cbeaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 23:16:22 by cbeaurai          #+#    #+#             */
/*   Updated: 2020/11/18 23:29:08 by cbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (src[i] == c)
			return (dezst + i + 1);
		i++;
	}
	return (NULL);
}
