/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:53:45 by zminhas           #+#    #+#             */
/*   Updated: 2020/11/17 16:11:00 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*src2;
	char		*dest2;

	dest2 = dest;
	src2 = src;
	while (n-- > 0)
		dest2[n] = src2[n];
	return (dest2);
}
