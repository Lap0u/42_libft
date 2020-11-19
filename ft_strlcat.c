/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaurai <cbeaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 01:44:33 by cbeaurai          #+#    #+#             */
/*   Updated: 2020/11/19 01:54:51 by cbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int i;
	int j;

	i = 0;
	while (dst[i])
		i++;
	j = 0;
	while (i + j < dstsize && src[i])
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = '\0';
	return (i + j);
}
