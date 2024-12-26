#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	strlen;
	char	*res;

	if (!s)
		return (NULL);
	strlen = ft_strlen(s);
	res = (char *)malloc(strlen + 1 * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (i < strlen)
	{
		res[i] = f(i, s[i]);
		++i;
	}
	res[i] = '\0';
	return (res);
}
/*
#include <stdio.h>

char	ft_f(unsigned int i, char c)
{
	return (c + i);
}

int	main(void)
{
	char *str = "Hello, world!";
	char *res = ft_strmapi(str, ft_f);
	printf("%s\n", res);
	free(res);
	return (0);
}
*/
