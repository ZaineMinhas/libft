/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 12:54:37 by zminhas           #+#    #+#             */
/*   Updated: 2020/12/17 17:33:30 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *lst_tamp;

	if (!lst)
		return ;
	while (*lst)
	{
		lst_tamp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = lst_tamp;
	}
}
