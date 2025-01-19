/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:59:42 by maghumya          #+#    #+#             */
/*   Updated: 2025/01/12 16:12:33 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptrc;

	ptrc = (unsigned char *)s;
	while (n-- > 0)
		*ptrc++ = (unsigned char)c;
	return (s);
}
/*
#include <stdio.h>

int main(void){
	char str[] = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
	ft_memset(str, '.', 10);
	printf("%s", str);
	return (0);
}
*/
