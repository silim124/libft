/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:21:38 by silim             #+#    #+#             */
/*   Updated: 2020/10/13 14:22:08 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_set(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	start_index;
	size_t	end_index;

	if (!s1 || !set)
		return (NULL);
	start_index = 0;
	while (s1[start_index] && ft_is_set(s1[start_index], set))
		start_index++;
	end_index = ft_strlen(s1) - 1;
	if (start_index >= end_index)
		return (ft_strdup(""));
	while (ft_is_set(s1[end_index], set) && end_index != start_index)
		end_index--;
	return (ft_substr(s1, start_index, end_index - start_index + 1));
}
