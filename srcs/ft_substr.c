/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 20:11:41 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/16 17:39:11 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	if (s == NULL || ft_strlen(s) < start || len == 0)
	{
		ptr = (char *)malloc(1 * sizeof(char));
		if (ptr == NULL)
			return (ptr);
		ptr[0] = '\0';
	}
	else
	{
		if (len + start >= ft_strlen(s))
			len = ft_strlen(s) - start;
		ptr = (char *)malloc((len + 1) * sizeof(char));
		if (ptr == NULL)
			return (ptr);
		ft_strlcpy(ptr, s + start, len + 1);
	}
	return (ptr);
}
/*
#include <stdio.h>
int main(void)
{
        char    s1[] = "ABCDEGHIDEFJKLMNOP";
        char    *s3;

        s3 = ft_substr(s1, 2, 4);
        ft_putstr_fd(s3, 1);
	free(s3);
	printf("\n");
	s3 = ft_substr(s1, 0, 100);
        ft_putstr_fd(s3, 1);
        free(s3);
	printf("\n");
	s3 = ft_substr(s1, 100, 1);
        ft_putstr_fd(s3, 1);
        free(s3);
	printf("\n");
	s3 = ft_substr(s1, 1, 1);
        ft_putstr_fd(s3, 1);
        free(s3);
	printf("\n");
	s3 = ft_substr(s1, 10, 50);
        ft_putstr_fd(s3, 1);
        free(s3);
	printf("\n");
	s3 = ft_substr(s1, 30, 2);
        ft_putstr_fd(s3, 1);
        free(s3);
	printf("\n");
	s3 = ft_substr("tripouille", 100, 1);
        ft_putstr_fd(s3, 1);
        free(s3);
	printf("\n");
	s3 = ft_substr(NULL, 10, 0);
        ft_putstr_fd(s3, 1);
        free(s3);
	printf("\n");
	s3 = ft_substr("lorem ipsu0$", 0, 10);
        ft_putstr_fd(s3, 1);
        free(s3);
	printf("\n");
	s3 = ft_substr(s1, 0, 0);
        ft_putstr_fd(s3, 1);
        free(s3);
}
*/
