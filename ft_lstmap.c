/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:15:07 by zminhas           #+#    #+#             */
/*   Updated: 2020/12/12 15:26:45 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del)(void *))
{
	t_list	*dest;
	t_list	*elemf;

	if (!lst)
		return (NULL);
	if (!f)
		return (lst);
	dest = NULL;
	while (lst)
	{
		if (!(elemf = ft_lstnew(f(lst->content))))
		{
			if (del)
				ft_lstclear(&elemf, del);
			else
				ft_lstiter(dest, &free);
			return (NULL);
		}
		ft_lstadd_back(&dest, elemf);
		lst = lst->next;
	}
	return (dest);
}
