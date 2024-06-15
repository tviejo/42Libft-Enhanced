/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:08:55 by tviejo            #+#    #+#             */
/*   Updated: 2024/05/18 22:28:13 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst2;
	t_list	*temp;

	if (*lst == NULL)
		return ;
	lst2 = *lst;
	while (lst2->next != NULL)
	{
		temp = lst2->next;
		del(lst2->content);
		free(lst2);
		lst2 = temp;
	}
	del(lst2->content);
	free(lst2);
	*lst = NULL;
}
