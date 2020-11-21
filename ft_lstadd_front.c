/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaurai </var/mail/cbeaurai>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 12:34:59 by cbeaurai          #+#    #+#             */
/*   Updated: 2020/11/21 14:53:37 by cbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lastadd_front(t_list **alst, t_list *new)

{
	if (alst && new)
	{
		new->next = *alst;
		*alst = new;
	}
	return ();
}
