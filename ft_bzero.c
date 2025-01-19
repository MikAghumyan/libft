/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:58:06 by maghumya          #+#    #+#             */
/*   Updated: 2025/01/12 15:58:07 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
#include <stdio.h>

int main(void){
	char str[10] = "1234567890";
	ft_bzero(str, 5);

	for(int i = 0; i < 10; ++i)
		printf("%c", str[i] ? str[i] : '.');
	return (0);
}
*/
