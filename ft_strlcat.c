/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:34:30 by tviejo            #+#    #+#             */
/*   Updated: 2024/03/28 15:53:31 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	counter_src;
	size_t	len_dest;
	size_t	len_src;

	len_dest = 0;
	while (dest[len_dest] != '\0')
		len_dest++;
	len_src = 0;
	while (src[len_src] != '\0')
		len_src++;
	if (size <= len_dest)
		return (len_src + size);
	else
	{
		counter_src = 0;
		while (src[counter_src] != '\0' && (len_dest + counter_src) < size - 1)
		{
			dest[len_dest + counter_src] = src[counter_src];
			counter_src++;
		}
	}
	dest[len_dest + counter_src] = '\0';
	return (len_dest + len_src);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
        int     result;
        char    dest[] = "ABCD";
        char    src[] = "EFGH";

        result = ft_strlcat(dest, src, 9);
        printf("%d", result);
	printf("\n%s", dest);
}
*/
