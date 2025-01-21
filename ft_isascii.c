/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:58:27 by maghumya          #+#    #+#             */
/*   Updated: 2025/01/12 15:58:28 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	printf("char : isascii : ft_isascii\n");
	for(int i = 0; i < 150; ++i)
		printf("'%c' : %d : %d\n", i, isascii(i), ft_isascii(i));
	return (0);
}*/
