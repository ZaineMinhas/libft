/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 11:19:49 by zminhas           #+#    #+#             */
/*   Updated: 2020/11/19 17:24:49 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned const char *src2;
	unsigned char		*dest2;
	size_t				i;

	if (src == 0 && dest == 0)
		return (NULL);
	src2 = src;
	dest2 = dest;

	if (dest2 < src2)
	{
		i = -1;
		while (++i < n)
			dest2[i] = src2[i];
	}
	else
		while (n--)
			dest2[n] = src2[n];
	return (dest);
}
