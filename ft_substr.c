/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcesar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:47:10 by qcesar            #+#    #+#             */
/*   Updated: 2020/11/18 16:46:16 by qcesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		n;
	char	*result;
	char	*temp;

	if (start >= ft_strlen(s))
		return (ft_strdup("\0"));
	n = ((start + len) > ft_strlen(s)) ? (ft_strlen(s) - start) : len;
	result = (char *)malloc(n * sizeof(char) + 1);
	if (!result)
		return (NULL);
	temp = result;
	while ((s[start] != '\0') && (len-- != 0))
		*temp++ = s[start++];
	*temp = '\0';
	return (result);
}
