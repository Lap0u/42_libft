/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaurai <cbeaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 23:16:06 by cbeaurai          #+#    #+#             */
/*   Updated: 2020/11/19 02:47:50 by cbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_pow(int nb, int power)
{
	while (power > 1)
	{
		nb *= nb;
		power--;
	}
	return (nb);
}

int		ft_nbr_len(int n)
{
	long long int	nbr;
	int				cmpt;

	cmpt = 0;
	nbr = n;
	if (nbr < 0)
	{
		nbr = -nbr;
		cmpt++;
	}
	while (nbr >= 10)
	{
		nbr /= 10;
		cmpt++;
	}
	return (cmpt + 1);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		div;

	i = 0;
	div = ft_pow(10, ft_nbr_len(n));
	if (n < 0)
	{
		div = -div;
		str[i++] = '-';
	}
	if (!(str = malloc(sizeof(char) * ft_nbr_len(n) + 1)))
		return (NULL);
	while (i < ft_nbr_len(n))
	{
		str[i] = n / div + '0';
		div /= 10;
		n /= 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}
#include <unistd.h>

void dputchar(char c)
{
	write(1, &c, 1);
}
void putstr(char *str)
{
	int i = 0;
	while(str[i])
		dputchar(str[i++]);
}

#include <stdio.h>
int main()
{
	int i = -20;
	//putstr(ft_itoa(-2147483648));
	//putstr(ft_itoa(-2147483647));
	//putstr(ft_itoa(2147483647));
	//putstr(ft_itoa(2147483646));
	while (i < 20)
	{
		putstr(ft_itoa(i));
		i++;
	}
	return 0;
}
