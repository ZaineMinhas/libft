/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 13:00:26 by zminhas           #+#    #+#             */
/*   Updated: 2020/11/24 13:08:24 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*dest;

	if (!(dest = malloc(sizeof(t_list))))
		return (NULL);
	dest->content = content;
	dest->next = NULL;
	return (dest);
}
