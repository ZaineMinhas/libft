/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 11:19:49 by zminhas           #+#    #+#             */
/*   Updated: 2020/11/18 11:29:56 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*src2;
	char		*dest2;

	src2 = src;
	dest2 = dest;
	while (n--)
		dest2[n] = src2[n];
	dest = dest2;
	return (dest);
}
