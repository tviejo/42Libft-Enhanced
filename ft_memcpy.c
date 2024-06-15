/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:59:34 by tviejo            #+#    #+#             */
/*   Updated: 2024/05/18 22:25:27 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == NULL && src == NULL)
		return (dest);
	if (n > 0)
	{	
		i = 0;
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return ((void *)dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char dest[] = "abcdefg";
	char src[] = "hijklmnop";
	printf("%s\n",(char *)ft_memcpy(dest, src, 8));
	printf("%s\n",(char *)memcpy(dest, src, 8));
	printf("%s\n",(char *)ft_memcpy((void *)0, src, 8));
//        printf("%s",(char *)memcpy((void *)0, src, 8));
//	printf("%s\n",(char *)ft_memcpy(NULL, NULL, 8));
//        printf("%s",(char *)memcpy(NULL, NULL, 8));
//	printf("%s\n",(char *)ft_memcpy(dest, NULL, 8));
//        printf("%s",(char *)memcpy(dest, NULL, 8));
	printf("%s\n",(char *)ft_memcpy(dest, src, 0));
        printf("%s",(char *)memcpy(dest, src, 0));
}
*/
