#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	current_index;
	int		start_index;
	size_t	end_index;
	int		checked;
	char	*new_str;

	current_index = 0;
	start_index = -1;
	end_index = 0;
	if (!*s1 || !*set)
		return (NULL);
	while (s1[current_index])
	{
		if (!(ft_strchr(set, s1[current_index])) && start_index == -1)
			start_index = current_index;
		if ((ft_strchr(set, s1[current_index])) && start_index != -1)
		{
			end_index = current_index;
			break;
		}
		++current_index;
	}
	if (start_index >= end_index)
		return (ft_strdup(""));
	new_str = ft_substr(s1, start_index, end_index - start_index + 1);
	return (new_str);
}

int 	main(int ac, char **av)
{
	puts(ft_strtrim("DCCBA", "AB"));
	puts(ft_strtrim("ACCBACBA", "AB"));
	puts(ft_strtrim("Hello World!", "Hlde"));  hello
	puts(ft_strtrim("HELLO", "T"));
	puts(ft_strtrim("TFTFT", "FT"));
	return (0);
}
