/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 13:10:36 by zminhas           #+#    #+#             */
/*   Updated: 2020/12/17 17:33:59 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*dest;

	if (!s)
		return (NULL);
	(len > ft_strlen(s) - start + 1) ? len = ft_strlen(s) - start : len;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (!(dest = (char *)ft_calloc(sizeof(char), (len + 1))))
		return (NULL);
	i = -1;
	while (s[start + (++i)] && len--)
		dest[i] = s[start + i];
	return (dest);
}
