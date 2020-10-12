/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 23:51:30 by silim             #+#    #+#             */
/*   Updated: 2020/10/13 00:19:04 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_abs(long nbr)
{
	return ((nbr < 0) ? -nbr : nbr);
}

static size_t	ft_len(long nbr)
{
	int	len;

	len = 0;
	len = (nbr <= 0) ? 1 : 0;
	while (nbr /= 10)
		++len;
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	long	n;
	size_t	len;

	n = nbr;
	len = ft_len(n);
	str = (char *)malloc(sizeof(char) * len + 1);
	str[len--] = '\0';
	if (n < 0)
		str[0] = '-';
	while (len >= 0)
	{
		str[len] = '0' + ft_abs(n % 10);
		n = ft_abs(n / 10);
		len--;
	}
	return (str);
}
