/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaurai </var/mail/cbeaurai>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 19:03:51 by cbeaurai          #+#    #+#             */
/*   Updated: 2020/11/19 19:29:11 by cbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int ft_isalnum(int c);

int ft_isalpha(int c);

int ft_isdigit(int c);

int ft_isprint(int c);

int ft_isascii(int c);

char *ft_itoa(int n);

void *memccpy(void *dst, void *src, int c, size_t n);

void *ft_calloc(size_t count, size_t size);

void ft_bzero(void *s, size_t n);

int	ft_atoi(const char *str);

int ft_strlen(const char *str);

void	ft_putchar_fd(char c, int fd);
