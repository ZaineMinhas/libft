/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 12:54:37 by zminhas           #+#    #+#             */
/*   Updated: 2020/12/05 13:56:01 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *lst_tamp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		lst_tamp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = lst_tamp;
	}
}
