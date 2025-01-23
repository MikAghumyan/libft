/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:00:51 by maghumya          #+#    #+#             */
/*   Updated: 2025/01/12 16:14:15 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char	*str1;
	char	*str2;
	int		n;

	if (argc == 4)
	{
		str1 = argv[1];
		str2 = argv[2];
		n = atoi(argv[3]);
	}
	else
	{
		str1 = "Hello World!";
		str2 = "Hello World!";
		n = 5;
	}
	printf("ft_strncmp: %d\n", ft_strncmp(str1, str2, n));
	printf("strncmp: %d\n", strncmp(str1, str2, n));
	return (0);
}
*/