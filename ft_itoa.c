/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 23:51:30 by silim             #+#    #+#             */
/*   Updated: 2020/10/13 14:14:50 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(long nbr)
{
	size_t	len;

	len = (nbr <= 0) ? 1 : 0;
	while (nbr)
	{
		nbr /= 10;
		++len;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	long	n;
	size_t	len;

	n = nbr;
	len = ft_len(n);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n)
	{
		str[--len] = '0' + (n % 10);
		n = n / 10;
	}
	return (str);
}
