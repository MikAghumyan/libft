/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:00:13 by maghumya          #+#    #+#             */
/*   Updated: 2025/01/12 16:10:45 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s) + 1;
	str = malloc(len);
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s, len);
	return (str);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*str;
	char	*res;

	if (argc == 2)
		str = argv[1];
	else
		str = "Hello, world!";
	res = ft_strdup(str);
	printf("%s\n", res);
	free(res);
	return (0);
}
*/