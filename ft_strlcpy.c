#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	i = -1;
	while (src[count])
		count++;
	while (++i < dstsize - 1 && src[i])
		dst[i] = src[i];
	dst[i] = 0;
	return (count);
}
