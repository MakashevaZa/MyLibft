/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcesar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 11:01:09 by qcesar            #+#    #+#             */
/*   Updated: 2020/11/19 19:11:23 by qcesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *elemtoreturn;
	t_list *tmp;

	if (!lst || !f)
		return (NULL);
	if (!(elemtoreturn = ft_lstnew(f(lst->content))))
		return (NULL);
	lst = lst->next;
	tmp = elemtoreturn;
	while (lst)
	{
		tmp->next = ft_lstnew(f(lst->content));
		if (!tmp->next)
		{
			ft_lstclear(&elemtoreturn, del);
			return (NULL);
		}
		tmp = tmp->next;
		lst = lst->next;
	}
	return (elemtoreturn);
}
