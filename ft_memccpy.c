/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcesar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:03:54 by qcesar            #+#    #+#             */
/*   Updated: 2020/11/15 11:06:29 by qcesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*newdest;
	unsigned char	*newsrc;
	size_t			iter;

	newdest = (unsigned char *)dest;
	newsrc = (unsigned char *)src;
	iter = 0;
	while (iter < n)
	{
		newdest[iter] = newsrc[iter];
		if (newdest[iter] == (unsigned char)c)
			return (dest + iter + 1);
		iter++;
	}
	return (NULL);
}
