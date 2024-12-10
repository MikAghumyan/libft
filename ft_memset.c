#include <stdlib.h>

void *memset(void s[.n], int c, size_t n)
{
	char	*ptrc;
	size_t	i;

	*ptrc = (char *) s;
	i = 0;
	while(i < n)
	{
		s[i] = (char) c;
	}

	return (c);
}
