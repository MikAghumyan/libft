/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:00:09 by maghumya          #+#    #+#             */
/*   Updated: 2025/01/12 16:00:10 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (const char)c)
			return ((char *)s);
		s++;
	}
	if ((const char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char	*str;
	char	*ptr;
	char	*ptr2;
	char	c;

	if (argc > 1)
		str = argv[1];
	else
		str = "Hello World!";
	if (argc > 2)
		c = argv[2][0];
	else
		c = 'W';
	ptr = ft_strchr(str, c);
	ptr2 = strchr(str, c);
	printf("ft_strchr: %s\n", ptr);
	printf("strchr: %s\n", ptr2);
	return (0);
}
*/