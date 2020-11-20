/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcesar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 15:41:09 by qcesar            #+#    #+#             */
/*   Updated: 2020/11/10 21:22:43 by qcesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		word_counter(char const *s, char c)
{
	int counter;
	int i;

	counter = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			counter++;
		while ((s[i] != '\0') && (s[i] != c))
			i++;
	}
	return (counter);
}

char	**filler(char **str_array, char const *s, char c)
{
	char	**temp;
	int		i;
	int		len;
	int		start;

	temp = str_array;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			len = 0;
			start = i;
			while ((s[i] != '\0') && (s[i] != c))
			{
				len++;
				i++;
			}
			*temp++ = ft_substr(s, start, len);
		}
	}
	*temp = NULL;
	return (str_array);
}

char	**ft_split(char const *s, char c)
{
	char	**str_array;

	str_array = (char **)malloc(sizeof(char *) * (1 + word_counter(s, c)));
	if (str_array == NULL)
		return (NULL);
	return (filler(str_array, s, c));
}
