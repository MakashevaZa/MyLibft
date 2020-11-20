/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcesar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 16:04:27 by qcesar            #+#    #+#             */
/*   Updated: 2020/11/16 17:23:09 by qcesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void *result;

	if (num == 0 || size == 0)
	{
		num = 1;
		size = 1;
	}
	result = (void *)malloc(num * size);
	if (result == NULL)
		return (NULL);
	return (ft_memset(result, 0, num * size));
}
