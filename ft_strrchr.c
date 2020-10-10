#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *head;

	head = s;
	while (*head)
		head++;
	while (head != s)
	{
		if (*head == (char)c)
			return ((char *)head);
		head--;
	}
	return (0);
}
