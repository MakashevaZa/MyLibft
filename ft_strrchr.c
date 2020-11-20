/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcesar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 18:19:06 by qcesar            #+#    #+#             */
/*   Updated: 2020/11/16 16:56:16 by qcesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*result;
	size_t	length;

	length = 0;
	result = (char *)str;
	while (*result)
		result++;
	while (length < ft_strlen(str) + 1)
	{
		if (ch == *result)
			return (result);
		else
			result--;
		length++;
	}
	return (NULL);
}
