/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:20:48 by silim             #+#    #+#             */
/*   Updated: 2020/10/10 15:22:04 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*new_mem;
	if (!(new_mem = malloc(size * nmemb)))
		return (0);
	ft_memset(new_mem, 0, nmemb * size);
	return (new_mem);
}
