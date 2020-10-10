/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:21:38 by silim             #+#    #+#             */
/*   Updated: 2020/10/11 00:09:08 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			break ;
		}
		++current_index;
	}
	if (start_index >= end_index)
		return (ft_strdup(""));
	new_str = ft_substr(s1, start_index, end_index - start_index + 1);
	return (new_str);
}
