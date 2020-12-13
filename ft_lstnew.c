/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 13:00:26 by zminhas           #+#    #+#             */
/*   Updated: 2020/12/13 16:19:29 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*dest;

	if (!(dest = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	dest->content = content;
	dest->next = NULL;
	return (dest);
}
