/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:21:23 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/16 17:39:11 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstmap;
	t_list	*lsttemp;

	lstmap = NULL;
	while (lst != NULL)
	{
		lsttemp = ft_lstnew(f(lst->content));
		if (lsttemp == NULL)
		{
			ft_lstclear(&lstmap, del);
			lstmap = NULL;
			return (lstmap);
		}
		ft_lstadd_back(&lstmap, lsttemp);
		lst = lst->next;
	}
	return (lstmap);
}
