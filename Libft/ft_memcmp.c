/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 11:38:45 by zminhas           #+#    #+#             */
/*   Updated: 2020/11/18 11:50:50 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		memcmp(const void *s1, const void *s2)
{
	int			i;
	const char	*s1_bis;
	const char	*s2_bis;

	s1_bis = s1;
	s2_bis = s2;
	i = 0;
	while (s1_bis[i] && s2_bis[i])
	{
		if (s1_bis[i] != s2_bis[i])
			return (s1_bis[i] - s2_bis[i]);
		i++;
	}
	return (s1_bis[i] - s2_bis[i]);
}
