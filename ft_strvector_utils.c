/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strvector_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:31:30 by maghumya          #+#    #+#             */
/*   Updated: 2025/10/21 11:37:24 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sv_push_back_dup(t_strvector *vector, const char *str)
{
	char	*dup_str;

	dup_str = ft_strdup(str);
	if (!dup_str)
		return (0);
	if (!ft_sv_push_back(vector, dup_str))
	{
		free(dup_str);
		return (0);
	}
	return (1);
}

int	ft_sv_push_back(t_strvector *vector, char *str)
{
	if (!vector || !str)
		return (0);
	if (!ft_sv_reserve(vector))
		return (0);
	vector->data[vector->size] = str;
	vector->size++;
	return (1);
}

int	ft_sv_pop_back(t_strvector *vector)
{
	if (!vector || vector->size == 0)
		return (0);
	vector->size--;
	vector->data[vector->size] = NULL;
	return (1);
}

int	ft_sv_pop_back_free(t_strvector *vector)
{
	if (!vector || vector->size == 0)
		return (0);
	vector->size--;
	free(vector->data[vector->size]);
	vector->data[vector->size] = NULL;
	return (1);
}

int	ft_sv_insert(t_strvector *vector, const char *str, size_t index)
{
	char	*dup_str;
	size_t	i;

	if (!vector || index > vector->size)
		return (0);
	dup_str = ft_strdup(str);
	if (!dup_str)
		return (0);
	if (!ft_sv_reserve(vector))
	{
		free(dup_str);
		return (0);
	}
	i = vector->size;
	while (i > index)
	{
		vector->data[i] = vector->data[i - 1];
		i--;
	}
	vector->data[index] = dup_str;
	vector->size++;
	return (1);
}
