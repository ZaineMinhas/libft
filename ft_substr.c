/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 13:10:36 by zminhas           #+#    #+#             */
/*   Updated: 2020/11/22 13:37:32 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*dest;

	if (!s)
		return (NULL);
	if (!(dest = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (start >= ft_strlen(s))
		return (dest);
	i = -1;
	while (s[start + (++i)] && len--)
		dest[i] = s[start + i];
	dest[i] = 0;
	return (dest);
}
