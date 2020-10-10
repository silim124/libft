/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:45:07 by silim             #+#    #+#             */
/*   Updated: 2020/10/10 15:45:08 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0)
		return ((char *)haystack);
	while (*haystack)
	{
		haystack = ft_strchr(haystack, needle[0]);
		if (!ft_strncmp(haystack, needle, len))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
