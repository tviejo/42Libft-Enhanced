/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:15:42 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/09 20:35:26 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	counter;

	counter = 0;
	while (s1[counter] != '\0' && s2[counter] != '\0'
		&& counter < n && s1[counter] == s2[counter])
		counter++;
	if (counter == n)
		return (0);
	else
		return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	counter;

	counter = 0;
	while (s1[counter] != '\0' && s2[counter] != '\0'
		&& s1[counter] == s2[counter])
		counter++;
	return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char	s1[] = "ABCD";
	char	s2[] = "ABCD";
	char    s3[] = "AB";
	char    s4[] = "ABCDE";
	char    s5[] = "ABCE";
	char    s6[] = "ABCE";

	printf("%d\n", ft_strncmp(s1, s2, 4));
	printf("%d\n\n", strncmp(s1, s2, 4));
	printf("%d\n", ft_strncmp(s1, s3, 4));
	printf("%d\n\n", strncmp(s1, s3, 4));
	printf("%d\n", ft_strncmp(s1, s4, 5));
	printf("%d\n\n", strncmp(s1, s4, 5));
	printf("%d\n", ft_strncmp(s1, s5, 4));
	printf("%d\n\n", strncmp(s1, s5, 4));
	printf("%d\n", strncmp(s1, s6, 3));
	printf("%d\n\n", ft_strncmp(s1, s6, 3));
	printf("%d\n", strncmp("qwerty", "qwer\300ty", 10));
        printf("%d\n\n", ft_strncmp("qwerty", "qwer\300ty", 10));
}
*/
