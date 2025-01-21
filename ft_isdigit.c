/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:58:32 by maghumya          #+#    #+#             */
/*   Updated: 2025/01/12 15:58:33 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("char : isdigit: ft_isdigit\n");
	for(int i = 0; i < 128; ++i)
		printf("'%c' : %d : %d\n", i, isdigit(i), ft_isdigit(i));
	return (0);
}
*/