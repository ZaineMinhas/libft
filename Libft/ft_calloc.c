/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 15:26:03 by zminhas           #+#    #+#             */
/*   Updated: 2020/11/20 18:53:40 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t		i;
	void		*dest;

	if (!(dest = malloc(sizeof(void) * (size * count))))
		return (NULL);
	i = -1;
	ft_bzero(dest, (count * size));
	return (dest);
}
