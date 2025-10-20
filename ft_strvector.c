/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strvector.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:27:49 by maghumya          #+#    #+#             */
/*   Updated: 2025/10/20 16:45:13 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_strvector	*ft_sv_init(size_t capacity)
{
	t_strvector	*vector;

	vector = (t_strvector *)ft_calloc(1, sizeof(t_strvector));
	if (!vector)
		return (NULL);
	vector->data = (char **)ft_calloc(capacity + 1, sizeof(char *));
	if (!vector->data)
	{
		free(vector);
		return (NULL);
	}
	vector->size = 0;
	vector->capacity = capacity;
	return (vector);
}

void	ft_sv_free(t_strvector *vector)
{
	size_t	i;

	if (!vector)
		return ;
	i = 0;
	while (i < vector->size)
	{
		free(vector->data[i]);
		i++;
	}
	free(vector->data);
	free(vector);
}

int	ft_sv_reserve(t_strvector *vector)
{
	char **new_data;
	if (!vector)
		return (0);

	if (vector->size < vector->capacity)
		return (1);
	if (vector->capacity == 0)
		vector->capacity = 1;
	else
		vector->capacity *= 2;
	new_data = (char **)ft_realloc(vector->data, (vector->capacity)
			* sizeof(char *), (vector->capacity + 1) * sizeof(char *));
	if (!new_data)
		return (0);
	vector->data = new_data;
	return (1);
}