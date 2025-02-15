/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:00:05 by maghumya          #+#    #+#             */
/*   Updated: 2025/01/12 16:00:07 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	sft_wordcount(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static size_t	sft_wordlen(const char *s, const char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	sft_freeresult(char **result)
{
	size_t	i;

	i = 0;
	while (result[i])
		free(result[i++]);
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	count;
	size_t	i;
	size_t	wordlen;

	if (!s)
		return (NULL);
	count = sft_wordcount(s, c);
	result = (char **)ft_calloc(count + 1, sizeof(char *));
	if (!result)
		return (NULL);
	i = -1;
	while (++i < count)
	{
		while (*s && *s == c)
			s++;
		wordlen = sft_wordlen(s, c);
		result[i] = ft_substr(s, 0, wordlen);
		if (!result[i])
			return (sft_freeresult(result), NULL);
		s += wordlen;
	}
	result[i] = NULL;
	return (result);
}
/*
#include <stdio.h>

int	main(int ac, char **arv)
{
	char	**words_m;
	char	**words;

	(void)ac;
	if (arv[1] && arv[2])
	{
		words_m = ft_split(arv[1], arv[2][0]);
		words = words_m;
		if (!words)
			return (0);
		while (*words)
		{
			printf("%s\n", *words);
			free(*words++);
		}
		free(words_m);
	}
	return (0);
}
*/
