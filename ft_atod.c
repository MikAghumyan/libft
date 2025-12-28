/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 00:26:44 by maghumya          #+#    #+#             */
/*   Updated: 2025/12/29 00:48:07 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static double	sft_atod_fraction(const char **str)
{
	double	fraction;
	double	divisor;

	fraction = 0.0;
	divisor = 10.0;
	while (**str >= '0' && **str <= '9')
	{
		fraction += (**str - '0') / divisor;
		divisor *= 10.0;
		(*str)++;
	}
	return (fraction);
}

double	ft_atod(const char *str)
{
	double	result;
	double	sign;
	double	fraction;

	result = 0.0;
	sign = 1.0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1.0;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10.0 + (*str - '0');
		str++;
	}
	if (*str == '.')
		str++;
	fraction = sft_atod_fraction(&str);
	return (sign * (result + fraction));
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*num_str = " -1234.5678 ";
	const char	*num_str2 = "42";
	const char	*num_str3 = "  +0.00123 ";
	const char	*num_str4 = "  -98765.4321abc";
	const char	*num_str5 = "3.14159";
	const char	*num_str6 = "  0  ";
	const char	*num_str7 = "  -0.0  ";
	const char	*num_str8 = "  +1234567890.0987654321  ";
	double		num;

	const char *num_str9 = "  1.7976931348623157e+308  ";   // Max double
	const char *num_str10 = "  -2.2250738585072014e-308  ";
		// Min positive double
	num = ft_atod(num_str);
	printf("The converted number is: %f\n", num);
	printf("The converted number is: %f\n", ft_atod(num_str2));
	printf("The converted number is: %f\n", ft_atod(num_str3));
	printf("The converted number is: %f\n", ft_atod(num_str4));
	printf("The converted number is: %f\n", ft_atod(num_str5));
	printf("The converted number is: %f\n", ft_atod(num_str6));
	printf("The converted number is: %f\n", ft_atod(num_str7));
	printf("The converted number is: %f\n", ft_atod(num_str8));
	printf("The converted number is: %f\n", atof(num_str8));
	printf("The converted number is: %f\n", ft_atod(num_str9));
	printf("The converted number is: %f\n", ft_atod(num_str10));
	return (0);
}
*/