/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:58:42 by maghumya          #+#    #+#             */
/*   Updated: 2025/01/12 15:58:44 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	sft_numlen(int n)
{
	size_t	len;

	len = 1;
	if (n < 0)
		len++;
	n /= 10;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static int	sft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	numlen;

	numlen = sft_numlen(n);
	result = (char *)malloc(numlen + 1);
	if (!result)
		return (NULL);
	result[numlen] = '\0';
	if (n < 0)
		result[0] = '-';
	if (n == 0)
		result[0] = '0';
	while (n)
	{
		result[--numlen] = sft_abs(n % 10) + '0';
		n /= 10;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(42));
	printf("%s\n", ft_itoa(-42));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(1234567890));
	printf("%s\n", ft_itoa(-1234567890));
	return (0);
}
*/
