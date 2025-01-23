/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:59:38 by maghumya          #+#    #+#             */
/*   Updated: 2025/01/12 16:11:43 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptrd;
	unsigned char	*ptrs;
	unsigned char	*tmp;

	ptrd = (unsigned char *)dst;
	ptrs = (unsigned char *)src;
	if (dst == src)
		return (dst);
	if (ptrd < ptrs)
		while (len--)
			*ptrd++ = *ptrs++;
	else
	{
		tmp = ptrd + len;
		ptrs += len;
		while (len--)
			*--tmp = *--ptrs;
	}
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
	printf("%s\n", (char *)ft_memmove(res, str, strlen(str)));
	free(res);
	return (0);
}
*/