/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcesar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 19:05:18 by qcesar            #+#    #+#             */
/*   Updated: 2020/11/10 20:55:47 by qcesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		n;
	char	*result;
	char	*temp;

	n = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)malloc(n * sizeof(char) + 1);
	if (!result)
		return (NULL);
	temp = result;
	ft_memcpy(temp, s1, ft_strlen(s1));
	ft_memcpy((char *)temp + ft_strlen(s1), s2, ft_strlen(s2));
	temp[n] = '\0';
	return (result);
}
