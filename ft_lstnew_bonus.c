/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 16:52:41 by tviejo            #+#    #+#             */
/*   Updated: 2024/05/15 12:33:33 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
		return (node);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
int	main(void)
{
	t_list *node;

	node= ft_lstnew("ABC");
	printf("%s\n", (char *)node->content);
	node= ft_lstnew(NULL);
        printf("%s", (char *)node->content);
}
*/
