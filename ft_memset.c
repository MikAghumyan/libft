#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptrc;

	ptrc = (unsigned char *)s;
	while (n-- > 0)
		*ptrc++ = (unsigned char)c;
	return (s);
}