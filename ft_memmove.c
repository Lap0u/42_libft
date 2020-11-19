/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaurai <cbeaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 23:17:19 by cbeaurai          #+#    #+#             */
/*   Updated: 2020/11/19 01:10:27 by cbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int i;

	i = 0;
	if (&dest > &src)
	{
		n -= 1;
		while (n >= 0)
		{
			dest[n] = src[n];
			n--;
		}
	}
	else
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	return (dest);
}
