/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcesar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:06:24 by qcesar            #+#    #+#             */
/*   Updated: 2020/11/17 18:34:24 by qcesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	char *tempd;
	char *temps;

	if (!destination && !source)
		return (NULL);
	if (destination < source)
		ft_memcpy(destination, source, n);
	else
	{
		tempd = destination + n - 1;
		temps = (char *)(source + n - 1);
		while (n--)
			*tempd-- = *temps--;
	}
	return (destination);
}
