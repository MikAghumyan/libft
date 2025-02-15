/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:01:06 by maghumya          #+#    #+#             */
/*   Updated: 2025/01/12 16:15:50 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	str = (char *)malloc(end - start + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + start, end - start + 1);
	return (str);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*str;
	char	*set;
	char	*res;

	if (argc == 3)
	{
		str = argv[1];
		set = argv[2];
	}
	else
	{
		str = "Hello, world!";
		set = "Helo!";
	}
	res = ft_strtrim(str, set);
	printf("%s\n", res);
	free(res);
	return (0);
}
*/