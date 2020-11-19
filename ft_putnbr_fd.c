/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaurai <cbeaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 23:34:38 by cbeaurai          #+#    #+#             */
/*   Updated: 2020/11/18 23:35:20 by cbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	while (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(fd, n + 0, 1);
}
