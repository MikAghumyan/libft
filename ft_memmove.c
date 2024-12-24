#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *ptrd;
	unsigned char *ptrs;
	unsigned char *tmp;

	ptrd = (unsigned char *)dst;
	ptrs = (unsigned char *)src;
	if (dst == src)
		return (dst);
	if (ptrd < ptrs)
		while (len--)
			*ptrd++ = *ptrs++;
	else
	{
		tmp = ptrd + len;
		ptrs += len;
		while (len--)
			*--tmp = *--ptrs;
	}
	return (dst);
}