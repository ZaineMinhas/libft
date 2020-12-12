/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:15:07 by zminhas           #+#    #+#             */
/*   Updated: 2020/12/12 13:49:46 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_lst(t_list *lst_start)
{
	ft_lstiter(lst_start, free);
}

t_list		*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del)(void *))
{
	t_list	*dest;
	t_list	*elemf;
	t_list	*lst_start;

	if (!lst || !f)
		return (NULL);
	dest = NULL;
	lst_start = lst;
	while (lst)
	{
		if (!(elemf = ft_lstnew(f(lst->content))))
		{
			if (del)
				ft_lstclear(&elemf, del);
			else
				ft_free_lst(lst_start);
			return (NULL);
		}
		ft_lstadd_back(&dest, elemf);
		lst = lst->next;
	}
	free(lst_start);
	return (dest);
}
