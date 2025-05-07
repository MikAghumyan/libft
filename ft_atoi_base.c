/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:52:25 by maghumya          #+#    #+#             */
/*   Updated: 2025/05/07 18:14:01 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isdigit_base(char c, int base)
{
	const char	*digits = "0123456789ABCDEF";
	int			i;

	i = 0;
	while (i < base)
	{
		if (digits[i] == ft_toupper(c))
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(const char *nptr, int base)
{
	int	i;
	int	sign;
	int	result;
	int	digit;

	i = 0;
	sign = 1;
	result = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-')
		sign = -1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	digit = ft_isdigit_base(nptr[i], base);
	while (digit >= 0)
	{
		result = result * base + digit;
		i++;
		digit = ft_isdigit_base(nptr[i], base);
	}
	return (result * sign);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi_base("1A", 16));  // 26
	printf("%d\n", ft_atoi_base("1010", 2)); // 10
	printf("%d\n", ft_atoi_base("FF", 16));  // 255
	printf("%d\n", ft_atoi_base("123", 10)); // 123
	printf("%d\n", ft_atoi_base("-1A", 16)); // -26
	return (0);
}
*/