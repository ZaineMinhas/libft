/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 14:19:08 by zminhas           #+#    #+#             */
/*   Updated: 2020/11/17 17:41:38 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	const char	src2;
	char		dest2;
	int			i;
	int			win;

	i = 0;
	win = 0;
	src2 = src;
	while (i < n)
		if (src2[i++] == c)
			win = 1;
	if (win != 1)
		return (NULL);
	dest2 = dest;
	i = 0;
	while (i < n && src2[i] != c)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest2[i] + 1);
}
