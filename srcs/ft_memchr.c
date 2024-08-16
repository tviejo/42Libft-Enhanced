/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:37:09 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/16 17:39:11 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	c = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
        char    s1[] = "ABCDEGHIDZEFJK\0LMNZOPQasdsa";
	int	s2[] = {10,151,165,2121,1521521,151,121};
        char    c = 'Z';
	char	c2 = 'Q';
	char	*s3;

	s3 = memchr(s2, 2121, 10);
        printf("originale:%s", s3);
	printf("  adresse:%p\n", s3);
        s3 = ft_memchr(s2, 2121, 10);
        printf("fonction:%s", s3);
	printf("  adresse:%p\n", s3);
	printf("\n\n");
	s3 = memchr(s1, c, 30);
  
  	printf("originale:%s", s3);
        printf("  adresse:%p\n", s3);
        s3 = ft_memchr(s1, c, 30);
        printf("fonction:%s", s3);
        printf("  adresse:%p\n", s3);
        printf("\n\n");
	
//	s3 = memchr(NULL, c, 10);
//        printf("originale:%s", s3);
//        printf("  adresse:%p\n", s3);
//        s3 = ft_memchr(NULL, c, 10);
//        printf("fonction:%s", s3);
//        printf("  adresse:%p\n", s3);
//	printf("\n\n");
	
	s3 = memchr(s1, c, -10);
        printf("originale:%s", s3);
        printf("  adresse:%p\n", s3);
        s3 = ft_memchr(s1, c, -10);
        printf("fonction:%s", s3);
        printf("  adresse:%p\n", s3);
	printf("\n\n");
	s3 = memchr(s1, 300, 10);
        printf("originale:%s", s3);
        printf("  adresse:%p\n", s3);
        s3 = ft_memchr(s1, 300, 10);
        printf("fonction:%s", s3);
        printf("  adresse:%p\n", s3);
        printf("\n\n");
	s3 = memchr(s1, -1, 10);
        printf("originale:%s", s3);
        printf("  adresse:%p\n", s3);
        s3 = ft_memchr(s1, -1, 10);
        printf("fonction:%s", s3);
        printf("  adresse:%p\n", s3);
        printf("\n\n");
	s3 = memchr(s1, 10, 0);
        printf("originale:%s", s3);
        printf("  adresse:%p\n", s3);
        s3 = ft_memchr(s1, 10, 0);
        printf("fonction:%s", s3);
        printf("  adresse:%p\n", s3);
        printf("\n\n");
	s3 = memchr(s1, c2, 5);
        printf("originale:%s", s3);
        printf("  adresse:%p\n", s3);
        s3 = ft_memchr(s1, c2, 5);
        printf("fonction:%s", s3);
        printf("  adresse:%p\n", s3);
        printf("\n\n");
	s3 = memchr(s1, c2, 50);
        printf("originale:%s", s3);
        printf("  adresse:%p\n", s3);
        s3 = ft_memchr(s1, c2, 50);
        printf("fonction:%s", s3);
        printf("  adresse:%p\n", s3);
        printf("\n\n");
}
*/
