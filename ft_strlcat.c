/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:21:32 by silim             #+#    #+#             */
/*   Updated: 2020/10/10 16:33:55 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dst[i])
		i++;
	while (src[j] && j < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	while (src[k])
		k++;
	return (k + dstsize);
}
