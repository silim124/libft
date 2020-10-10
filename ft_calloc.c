#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*new_mem;
	if (!(new_mem = malloc(size * nmemb)))
		return (0);
	ft_memset(new_mem, 0, nmemb * size);
	return (new_mem);
}
