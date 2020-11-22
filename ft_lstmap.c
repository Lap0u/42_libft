/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaurai <cbeaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 18:29:20 by cbeaurai          #+#    #+#             */
/*   Updated: 2020/11/23 00:10:26 by cbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void*))
{
	if (!lst || !f || !del)
		return  (NULL);
	t_list *newl;
	if (!(newl = malloc(sizeof(t_list))))
		return (NULL);
	while (lst)
	{
		//if (!(newl = malloc(sizeof(t_list))))
		//	return (NULL);
		newl->content = f(lst->content);
		newl->next = lst->next;
		lst = lst->next;
	}
	return (lst);
}
