/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaurai <cbeaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 23:21:00 by cbeaurai          #+#    #+#             */
/*   Updated: 2020/11/18 23:35:57 by cbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int j;

	i = 0;
	if (little[0] == '\0')
		return (big);
	while (i < len)
	{
		j = 0;
		while (little[j] == big[j + i])
		{
			j++;
			if (little[j] == '\0')
				return (big + i);
		}
		i++;
	}
	return (NULL);
}
