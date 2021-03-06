/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:21:20 by silim             #+#    #+#             */
/*   Updated: 2020/11/14 13:51:04 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_mem;
	size_t	len;

	len = 0;
	if (!(new_mem = malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (0);
	while (s[len])
	{
		new_mem[len] = s[len];
		len++;
	}
	new_mem[len] = '\0';
	return (new_mem);
}
