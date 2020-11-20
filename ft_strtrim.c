/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcesar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 19:26:13 by qcesar            #+#    #+#             */
/*   Updated: 2020/11/18 17:01:14 by qcesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_checkchr(const char *str, int ch)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (ch == str[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int start;
	int end;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_checkchr(set, s1[start]) && s1[start] != '\0')
		start++;
	if (!s1[start])
		return (ft_strdup("\0"));
	while (ft_checkchr(set, s1[end]) && (end > 0))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}
