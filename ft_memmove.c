/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:59:34 by tviejo            #+#    #+#             */
/*   Updated: 2024/03/29 10:12:51 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memrcpy(void *dest, const void *src, size_t n)
{
	while (n > 0)
	{
		((char *) dest)[n - 1] = ((char *) src)[n - 1];
		--n;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest > src)
		dest = ft_memrcpy(dest, src, n);
	else
		dest = ft_memcpy(dest, src, n);
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char dest[] = "abcdef";
	char src[] = "ghijklmnop";
	printf("ft:%s\n",(char *)ft_memmove(dest, src, 9));
	printf("libc:%s",(char *)memmove(dest, src, 9));
}
*/
