/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:59:31 by maghumya          #+#    #+#             */
/*   Updated: 2025/01/12 15:59:31 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	int		n;

	str1 = "Hello World!";
	str2 = "Hello World!";
	n = 5;
	printf("ft_memcmp: %d\n", ft_memcmp(str1, str2, n));
	printf("memcmp: %d\n", memcmp(str1, str2, n));
	return (0);
}
*/