/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 14:51:19 by zminhas           #+#    #+#             */
/*   Updated: 2020/12/28 18:12:40 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		i;

	if (!(dest = (char *)ft_calloc(sizeof(char), (ft_strlen(s1) + 1))))
		return (NULL);
	i = -1;
	while (s1[++i])
		dest[i] = s1[i];
	return (dest);
}
