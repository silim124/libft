#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	i = 0;
	while (dst[count] && i < dstsize)
		count++;
	while (count + i < dstsize - 1 && src[i])
	{
		dst[count + i] = src[i];
		i++;
	}
	if (count < dstsize)
		dst[count + i] = 0;
	return (count + ft_strlen(src));
}
