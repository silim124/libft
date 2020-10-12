/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:21:46 by silim             #+#    #+#             */
/*   Updated: 2020/10/12 21:24:04 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	str_len;

	str_len = ft_strlen(str);
	if (!str)
		return (NULL);
	if (str_len < len)
		return (ft_strdup(""));
	if (!(substr = malloc(sizeof(char) * len + 1)))
		return (NULL);
	ft_strlcpy(substr, str + start, len + 1);
	return (substr);
}
