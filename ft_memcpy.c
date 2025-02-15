/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:59:34 by maghumya          #+#    #+#             */
/*   Updated: 2025/01/12 16:08:33 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptrd;
	unsigned char	*ptrs;

	ptrd = (unsigned char *)dst;
	ptrs = (unsigned char *)src;
	if (ptrd == NULL && ptrs == NULL)
		return (NULL);
	while (n-- > 0)
		ptrd[n] = ptrs[n];
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str;
	char	*res;

	str = "Hello, world!";
	res = (char *)malloc(strlen(str) + 1);
	printf("%s\n", (char *)ft_memcpy(res, str, strlen(str)));
	free(res);
	return (0);
}
*/