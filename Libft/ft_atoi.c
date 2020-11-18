/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 17:50:02 by zminhas           #+#    #+#             */
/*   Updated: 2020/11/18 18:33:59 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int pos_neg;
	int number;
	int i;

	i = 0;
	if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	pos_neg = 0;
	if (str[i] == '-' || str[i] == '+' || str[i] == ' ')
	{
		if (str[i] == '-')
			pos_neg = 1;
		i++;
	}
	number = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number *= 10 + (str[i] - 48);
		i++;
	}
	if (pos_neg == 1)
		return (-number);
	return (number);
}
