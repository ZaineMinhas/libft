/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 13:10:36 by zminhas           #+#    #+#             */
/*   Updated: 2020/12/03 17:03:24 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*dest;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		if (!(dest = ft_calloc(sizeof(char), 1)))
			return (NULL);
		return (dest);
	}
	if (!(dest = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = -1;
	while (s[start + (++i)] && len--)
		dest[i] = s[start + i];
	dest[i] = 0;
	return (dest);
}
