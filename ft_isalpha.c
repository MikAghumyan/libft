/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:58:23 by maghumya          #+#    #+#             */
/*   Updated: 2025/01/12 15:58:24 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/*
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	printf("char : isalpha : ft_isalpha\n");
	for(int i = 0; i < 128; ++i)
		printf("'%c' : %d : %d\n", i, isalpha(i), ft_isalpha(i));
	return (0);
}
*/
