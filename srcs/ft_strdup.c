/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:34:30 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/16 17:39:11 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *src)
{
	size_t	counter;
	size_t	len_src;
	char	*ptr;

	len_src = 0;
	while (src[len_src] != '\0')
		len_src++;
	ptr = malloc((len_src + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	counter = 0;
	while (counter < len_src && src[counter] != '\0')
	{
		ptr[counter] = src[counter];
		counter ++;
	}
	ptr[counter] = '\0';
	return (ptr);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
        char	*result;
        char    src[] = "ABCD";

        result = ft_strdup(src);
        printf("fonction: %s", result);
	printf("\nfonction:%p", result);
	free(result);
	result = strdup(src);
        printf("\n\noriginale: %s", result);
        printf("\noriginale:%p", result);
        free(result);
}
*/
