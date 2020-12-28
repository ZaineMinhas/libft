/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:09:02 by zminhas           #+#    #+#             */
/*   Updated: 2020/12/28 18:12:18 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int nb)
{
	int		len;

	len = 0;
	while (nb /= 10)
		len++;
	return (++len);
}

char		*ft_itoa(int n)
{
	char	*dest;
	int		i;
	int		pos_neg;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	pos_neg = (n < 0) ? 1 : 0;
	if (!(dest = (char *)ft_calloc(sizeof(char), ft_intlen(n) + 1 + pos_neg)))
		return (NULL);
	if (n < 0)
		n = -n;
	i = ft_intlen(n) + pos_neg;
	while (i > 0)
	{
		dest[i-- - 1] = (n % 10) + 48;
		n /= 10;
	}
	if (pos_neg)
		dest[0] = '-';
	return (dest);
}
