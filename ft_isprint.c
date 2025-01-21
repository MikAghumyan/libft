/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:58:37 by maghumya          #+#    #+#             */
/*   Updated: 2025/01/12 15:58:39 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("char : isprint : ft_isprint\n");
	for (int i = 0; i < 150; ++i)
		printf("'%c' : %d : %d\n", i, isprint(i), ft_isprint(i));
	return (0);
}
*/