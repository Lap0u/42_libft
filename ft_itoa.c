/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaurai <cbeaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 23:16:06 by cbeaurai          #+#    #+#             */
/*   Updated: 2020/11/23 00:03:24 by cbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_pow(int nb, int power)
{
	int res;

	res = 1;
	while (power > 1)
	{
		res *= nb;
		power--;
	}
	return (res);
}

int		ft_nbr_len(int n)
{
	long long int	nbr;
	int				cmpt;

	if (n == 0)
		return (1);
	cmpt = 0;
	nbr = n;
	if (nbr < 0)
	{
		nbr = -nbr;
		cmpt++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		cmpt++;
	}
	return (cmpt);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		div;
	int		len;

	len = ft_nbr_len(n);
	if (!(str = malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = 0;
	if (n < 0)
	{
		div = -ft_pow(10, len - 1);
		str[i++] = '-';
	}
	else
		div = ft_pow(10, len);
	while (i < len)
	{
		str[i] = n / div + '0';
		n %= div;
		div /= 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}
