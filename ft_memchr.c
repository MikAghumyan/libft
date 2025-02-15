/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:59:27 by maghumya          #+#    #+#             */
/*   Updated: 2025/01/12 16:08:18 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *str = "Hello World!";
	char *ptr;
	char *ptr2;

	ptr = ft_memchr(str, 'W', strlen(str));
	ptr2 = memchr(str, 'W', strlen(str));
	printf("ft_memchr: %s\n", ptr);
	printf("memchr: %s\n", ptr2);
	return (0);
}
*/
