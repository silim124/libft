#include "libft.h"

char *ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	str_len;

	str_len = ft_strlen(str);
	if (!str)
		return (NULL);
	if (str_len < len)
		return (ft_strdup(""));
	if (!(substr = malloc(sizeof(char) * len + 1)))
		return (NULL);
	ft_strlcpy(substr, str + start, len + 1);
	return (substr);
}
