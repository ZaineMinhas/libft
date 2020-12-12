/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 15:26:03 by zminhas           #+#    #+#             */
/*   Updated: 2020/11/22 17:27:15 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*dest;

	if (!(dest = malloc(sizeof(void) * (size * count))))
		return (NULL);
	ft_bzero(dest, (count * size));
	return (dest);
}
