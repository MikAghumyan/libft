#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *ptrd;
	unsigned char *ptrs;

	ptrd = (unsigned char *)dst;
	ptrs = (unsigned char *)src;
	while (n-- > 0)
		ptrd[n] = ptrs[n];
	return (dst);
}