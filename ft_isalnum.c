/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:58:18 by maghumya          #+#    #+#             */
/*   Updated: 2025/01/12 15:58:19 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	printf("char : isalnum : ft_isalnum\n");
	for(int i = 0; i < 128; ++i)
		printf("'%c' : %d : %d\n", i, isalnum(i), ft_isalnum(i));
	return (0);
}
*/
