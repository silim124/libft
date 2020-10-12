/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 23:51:30 by silim             #+#    #+#             */
/*   Updated: 2020/10/13 00:08:41 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_len(long nbr)
{
	int	len;

	len = 0;
	len = (nbr <= 0) ? 1 : 0;
	while (nb /= 10)
		++len;
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	long	n;
	size_t	i;

	n = nbr;
	len = ft_len(n);
	str = (char *)malloc(sizeof(char) * len + 1);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (len >= 0)
		{
			str[len] = '0' + -(n % 10);
			n = -(n / 10);
			len--;
		}
	return (str);
}
