/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcesar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 18:06:45 by qcesar            #+#    #+#             */
/*   Updated: 2020/11/16 15:47:32 by qcesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char *result;

	result = (char *)str;
	while (*result)
	{
		if (ch == *result)
			return (result);
		result++;
	}
	if (ch == '\0')
		return (result);
	return (NULL);
}
