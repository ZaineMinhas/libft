/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 15:08:21 by zminhas           #+#    #+#             */
/*   Updated: 2020/11/20 12:37:09 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;

	if (!src || !dest)
		return ((size_t)NULL);
	i = 0;
	if (!dstsize)
		return (ft_strlen(src));
	if (dstsize)
		while (src[i] && (i < dstsize - 1))
		{
			dest[i] = src[i];
			i++;
		}
	dest[i] = 0;
	return (ft_strlen(src));
}
