/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaurai </var/mail/cbeaurai>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 12:22:46 by cbeaurai          #+#    #+#             */
/*   Updated: 2020/11/21 14:48:58 by cbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list newl;
	if (!(newl = malloc(sizeof(t_list))))
		return (NULL);
	newl.content = content;
	newl.next = NULL;
	return (newl);
}
