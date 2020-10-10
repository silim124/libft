/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:44:27 by silim             #+#    #+#             */
/*   Updated: 2020/10/10 15:44:40 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *head;

	head = s;
	while (*head)
		head++;
	while (head != s)
	{
		if (*head == (char)c)
			return ((char *)head);
		head--;
	}
	return (0);
}
