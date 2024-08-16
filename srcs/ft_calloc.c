/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:01:13 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/16 17:39:11 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void			*ptr;
	const size_t	size = nelem * elsize;

	ptr = NULL;
	if (size == 0 || nelem <= SIZE_MAX / elsize)
		ptr = malloc(size);
	if (ptr != NULL)
		ft_bzero(ptr, size);
	return (ptr);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*ptr;

	ptr = ft_calloc(10, sizeof(char));
	printf("fonction: %s", ptr);
	free(ptr);
//	ptr = calloc(10, sizeof(char));
//        printf("\noriginale: %s", ptr);
//        free(ptr);
	printf("\n");
	ptr = ft_calloc(0, sizeof(char));
        printf("fonction: %s", ptr);
        free(ptr);
//        ptr = calloc(0, sizeof(char));
//        printf("\noriginale: %s", ptr);
//        free(ptr);
	printf("\n");	
	ptr = ft_calloc(252025256505020, 26252121251);
        printf("fonction: %s", ptr);
        free(ptr);
//        ptr = calloc(252025256505020, 26252121251);
//	printf("\noriginale: %s", ptr);
//        free(ptr);
	printf("\n");
        ptr = ft_calloc(2147483647, 2147483647);
        printf("fonction: %s", ptr);
        free(ptr);
        ptr = ft_calloc(2147483647, 0);
        printf("fonction: %s", ptr);
        free(ptr);
        ptr = ft_calloc(2147483647, -2147483647);
        printf("fonction: %s", ptr);
        free(ptr);
}
*/
