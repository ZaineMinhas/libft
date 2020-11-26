/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:15:07 by zminhas           #+#    #+#             */
/*   Updated: 2020/11/26 18:09:05 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dest;
	t_list	*new;

	if (!lst)
		return (NULL);
	dest = NULL;
	if (!(dest = malloc(sizeof(t_list) * ft_lstsize(lst))))
		return (NULL);
	while (dest->next)
	{
		if (!(new = ft_lstnew(f(lst->content))))
		{
			ft_lstdelone(lst, del);
			return (NULL);
		}
		ft_lstadd_back(&dest, new);
	}
	return (dest);
}
