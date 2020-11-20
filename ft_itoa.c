/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcesar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 15:51:24 by qcesar            #+#    #+#             */
/*   Updated: 2020/11/18 17:08:15 by qcesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		length_counter(int n)
{
	if (n > 9)
		return (1 + length_counter(n / 10));
	else
		return (1);
}

int		sign_checker(int n)
{
	if (n >= 0)
		return (0);
	else
		return (1);
}

char	*ft_itoa(int n)
{
	int		length;
	char	*str;
	int		sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = sign_checker(n);
	length = sign ? length_counter(-n) : length_counter(n);
	if (!(str = (char *)malloc(sizeof(char) * length + sign + 1)))
		return (NULL);
	n = sign ? (-n) : n;
	str[length--] = '\0';
	while (length != -1)
	{
		str[length] = n % 10 + '0';
		n = n / 10;
		length--;
	}
	if (sign)
		return (ft_strjoin("-", str));
	return (str);
}
