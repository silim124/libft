/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 17:08:33 by silim             #+#    #+#             */
/*   Updated: 2020/11/09 16:00:33 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			*free_error(char **word_set)
{
	unsigned int	i;

	i = 0;
	while (word_set[i])
	{
		free(word_set[i]);
		i++;
	}
	free(word_set);
	return (NULL);
}

static size_t		get_size(char const *s, char c)
{
	size_t		count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
		{
			while (*s && *s != c)
				++s;
			++count;
		}
	}
	return (count);
}

static char			**split_word(char **word_set, char const *s, char c)
{
	size_t			start;
	size_t			end;
	size_t			n;

	start = 0;
	n = 0;
	end = 0;
	while (s[end] == c)
		++end;
	while (s[end] && n <= (get_size(s, c)))
	{
		start = end;
		while (s[end] != c && s[end])
			++end;
		if (!(word_set[n++] = ft_substr(s, start, end - start)))
			return (free_error(word_set));
		while (s[end] == c)
			++end;
	}
	word_set[n] = NULL;
	return (word_set);
}

char				**ft_split(char const *s, char c)
{
	char			**word_set;

	if (!s)
		return (0);
	if (!(word_set = malloc(sizeof(char *) * ((get_size(s, c)) + 1))))
		return (0);
	return (split_word(word_set, s, c));
}
