/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcesar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 19:08:48 by qcesar            #+#    #+#             */
/*   Updated: 2020/11/19 19:14:07 by qcesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length_cntr(int n)
{
	if (n > 9)
		return (1 + length_cntr(n / 10));
	else
		return (1);
}

static int	sign_chkr(int n)
{
	if (n >= 0)
		return (0);
	else
		return (1);
}

static void	ft_putdigit_fd(int length, int n, int fd)
{
	int		i;
	char	digit;

	while (length != 0)
	{
		i = 1;
		while (length_cntr(i) != length)
			i *= 10;
		digit = n / i + '0';
		ft_putchar_fd(digit, fd);
		n = n % i;
		length--;
	}
}

void		ft_putnbr_fd(int n, int fd)
{
	int	length;
	int	sign;

	if (n == -2147483648)
	{
		ft_putnbr_fd(-214748364, fd);
		ft_putnbr_fd(8, fd);
		return ;
	}
	sign = sign_chkr(n);
	if (sign)
		ft_putchar_fd('-', fd);
	length = sign ? length_cntr(-n) : length_cntr(n);
	n = sign ? (-n) : n;
	ft_putdigit_fd(length, n, fd);
}
