/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:09:02 by zminhas           #+#    #+#             */
/*   Updated: 2020/11/23 15:04:04 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int nb)
{
	int		len;

	len = 0;
	while (nb /= 10)
		len++;
	return (len);
}

char		*ft_itoa(int n)
{
	char	*dest;
	int		len;

	if (!n)
		return (NULL);
	if (!(dest = ft_calloc(sizeof(char), (ft_intlen(n) + 1))))
		return (NULL);
	if (n < 0)
	{
		dest[0] = '-';
		n *= -1;
	}
	len = ft_intlen(n) + 1;
	while (len)
	{
		dest[len-- - 1] = (n % 10) + 48;
		n /= 10;
	}
	return (dest);
}




#include <stdio.h>

int		main(void)
{
	int n = 123456789;

	printf("%s", ft_itoa(n));
	return (0);
}

