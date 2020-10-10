/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:21:28 by silim             #+#    #+#             */
/*   Updated: 2020/10/10 15:22:04 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*new_str;

	if (!*s1 && !*s2)
		return (NULL);
	else if (!*s1 || !*s2)
		return ((*s1)? ft_strdup(s1) : ft_strdup(s2));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (!(new_str = malloc(sizeof(char) * (s1_len + s2_len + 1))))
		return (NULL);
	memcpy(new_str, s1, s1_len + 1);
	strlcat(new_str, s2, s2_len + 1);
	return (new_str);
}
