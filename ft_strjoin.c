/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:00:20 by maghumya          #+#    #+#             */
/*   Updated: 2025/01/12 16:11:18 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len + 1);
	ft_strlcat(str, s2, len + 1);
	return (str);
}

/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*str;
	char	*str2;
	char	*res;

	if (argc == 3)
	{
		str = argv[1];
		str2 = argv[2];
	}
	else
	{
		str = "Hello, ";
		str2 = "world!";
	}
	res = ft_strjoin(str, str2);
	printf("%s\n", res);
	free(res);
	return (0);
}
*/