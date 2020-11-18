/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:04:13 by zminhas           #+#    #+#             */
/*   Updated: 2020/11/18 17:46:58 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	if (needle == 0)
		return ((char *)haystack);
	i = -1;
	while (haystack[++i])
	{
		j = 0;
		while ((haystack[i + j] == needle[j]) && (j < len))
		{
			if (needle[j + 1] == 0 || j == len)
				return ((char *)haystack + i);
			j++;
		}
	}
	return (NULL);
}
