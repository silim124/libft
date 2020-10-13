/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 17:07:47 by silim             #+#    #+#             */
/*   Updated: 2020/10/13 19:01:46 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	unsigned int	len;

	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	if (!(new_str = malloc(sizeof(char) * (len + 1))))
		return (0);
	new_str[len] = 0;
	while (--len >= 0)
		new_str[len] = f(len, s[len]);
	return (new_str);
}
