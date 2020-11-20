/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcesar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 10:30:14 by qcesar            #+#    #+#             */
/*   Updated: 2020/11/19 17:37:16 by qcesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int lstsize;

	lstsize = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		lstsize++;
	}
	return (lstsize);
}
