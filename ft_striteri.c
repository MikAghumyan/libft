#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = -1;
	while (s[++i])
		f(i, &s[i]);
}
/*
#include <stdio.h>

void	ft_f(unsigned int i, char *c)
{
	*c = *c + i;
}

int	main(void)
{
	char	str[] = "Hello, world!";

	ft_striteri(str, ft_f);
	printf("%s\n", str);
	return (0);
}
*/