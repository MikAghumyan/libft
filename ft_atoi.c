/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:57:58 by maghumya          #+#    #+#             */
/*   Updated: 2025/05/07 18:02:39 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-')
		sign = -1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (ft_isdigit(nptr[i]))
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	return (result * sign);
}
/*
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	printf("%d %d %d %d %d\n", 0, INT_MAX, INT_MIN, 42, ~0);
	printf("%d %d\n", atoi("-52345252354366235235098623452759235626235"),
		ft_atoi("-52345252354366235235098623452759235626235"));
	return (0);
}
*/