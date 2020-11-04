/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:44:27 by silim             #+#    #+#             */
/*   Updated: 2020/10/14 17:58:17 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *ptr_str;

	ptr_str = (char *)s;
	while (*ptr_str)
		ptr_str++;
	while (ptr_str >= s)
	{
		if (*ptr_str == c)
			return (ptr_str);
		ptr_str--;
	}
	return (0);
}
