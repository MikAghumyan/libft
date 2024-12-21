#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *str;
	size_t len;

	len = strlen(s) + 1;
	str = malloc(len);
	if (str == NULL)
		return (NULL);
	memcpy(str, s, len);
	return (str);
}