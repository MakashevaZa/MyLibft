/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcesar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 19:01:49 by qcesar            #+#    #+#             */
/*   Updated: 2020/11/11 14:03:31 by qcesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char *a;
	unsigned char b;

	a = (unsigned char*)arr;
	b = (unsigned char)c;
	while (n--)
	{
		if (*a == b)
			return (a);
		a++;
	}
	return (NULL);
}
