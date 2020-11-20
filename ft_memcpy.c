/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcesar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:28:48 by qcesar            #+#    #+#             */
/*   Updated: 2020/11/16 16:40:33 by qcesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *temp;

	temp = dest;
	if ((dest == NULL) && (src == NULL))
		return (dest);
	while (n)
	{
		*temp++ = *(char *)src++;
		n--;
	}
	return (dest);
}
