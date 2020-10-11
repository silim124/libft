/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:45:07 by silim             #+#    #+#             */
/*   Updated: 2020/10/11 16:32:44 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	small_i;
	size_t	big_i;

	if (!needle)
		return ((char *)haystack);
	big_i = 0;
	while (haystack[big_i] && big_i < len)
	{
		if (haystack[big_i] == needle[0])
		{
			small_i = 0;
			while (needle[small_i] \
					&& haystack[big_i + small_i] == needle[small_i] \
					&& big_i + small_i < len)
			{
				small_i++;
				if (!needle[small_i])
					return ((char *)(haystack + big_i));
			}
		}
		big_i++;
	}
	return (0);
}
