/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 20:23:58 by maghumya          #+#    #+#             */
/*   Updated: 2025/09/15 19:25:15 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putchar_c(char c, int fd)
{
	ft_putchar_fd(c, fd);
	return (1);
}

size_t	ft_putstr_c(char *str, int fd)
{
	if (!str)
		str = "(null)";
	ft_putstr_fd(str, fd);
	return (ft_strlen(str));
}

size_t	ft_putnbr_c(int n, int fd)
{
	size_t	bytes;
	int		sign;

	bytes = 0;
	if (n < 0)
	{
		bytes += ft_putchar_c('-', fd);
		sign = -1;
	}
	else
		sign = 1;
	if (n >= 10 || n <= -10)
	{
		bytes += ft_putnbr_c(sign * (n / 10), fd);
		bytes += ft_putnbr_c(sign * (n % 10), fd);
	}
	else
		bytes += ft_putchar_c(n * sign + '0', fd);
	return (bytes);
}

size_t	ft_putunit(unsigned int n, int fd)
{
	size_t	bytes;

	bytes = 0;
	if (n >= 10)
	{
		bytes += ft_putunit(n / 10, fd);
		bytes += ft_putchar_c((n % 10) + '0', fd);
	}
	else
		bytes += ft_putchar_c(n + '0', fd);
	return (bytes);
}
