#include "libft.h"

void	*memset(void *s, int c, size_t n)
{
	unsigned char *ptrc;
	size_t i;

	ptrc = (unsigned char *)s;
	while (n-- > 0)
		*ptrc++ = (unsigned char)c;
	return (s);
}