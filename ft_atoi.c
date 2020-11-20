/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcesar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 13:28:05 by qcesar            #+#    #+#             */
/*   Updated: 2020/11/19 16:53:34 by qcesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if (c == '\t' || c == ' ' || c == '\r' ||
			c == '\r' || c == '\n' || c == '\v' || c == '\f')
		return (1);
	return (0);
}

int	overover(int sign, unsigned long long number)
{
	if ((number / 10 == 922337203685477580) && (number % 10 == 8)
			&& (sign == -1))
		return (0);
	else if ((number > 9223372036854775807) && (sign == -1))
		return (0);
	else if (number > 9223372036854775807)
		return (-1);
	return ((int)(number * sign));
}

int	ft_atoi(const char *str)
{
	int					sign;
	unsigned long long	number;

	number = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (!ft_isdigit(*str))
		return (0);
	while (ft_isdigit(*str))
		number = number * 10 + *str++ - '0';
	return (overover(sign, number));
}
