#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*cursor;
	char	*first_occur;

	i = 0;
	cursor = (char *)needle;
	first_occur = NULL;
	while (i < len && haystack[i])
	{
		if (!*cursor)
			return (first_occur);
		while ((haystack[i] == *cursor) && *cursor)
		{
			first_occur = cursor;
			cursor++;
		}
		cursor = needle;
		++i;
	}
	return (NULL);
}

int	main(int ac, char **av)
{
	printf("%s", ft_strnstr("abcccdef", "abcccde", 2));
	return 0;
}
