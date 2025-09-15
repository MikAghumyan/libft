/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 16:46:22 by maghumya          #+#    #+#             */
/*   Updated: 2025/09/15 20:01:23 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_puthex(unsigned long long n, int upper, int fd)
{
	size_t	bytes;
	char	*base;

	if (upper)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (ft_strlen(base) != 16)
		return (0);
	bytes = 0;
	if (n >= 16)
	{
		bytes += ft_puthex(n / 16, upper, fd);
		bytes += ft_putchar_c(base[n % 16], fd);
	}
	else
		bytes += ft_putchar_c(base[n], fd);
	return (bytes);
}

size_t	ft_putptr(unsigned long long n, int fd)
{
	size_t	bytes;

	bytes = 0;
	bytes += ft_putstr_c("0x", fd);
	bytes += ft_puthex(n, 0, fd);
	return (bytes);
}
