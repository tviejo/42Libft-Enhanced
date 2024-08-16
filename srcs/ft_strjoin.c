/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 20:31:20 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/16 17:39:11 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char	*ft_res(char const *s1, char const *s2, char *ptr)
{
	int	size_s1;
	int	size_s2;
	int	i;

	size_s1 = 0;
	while (s1[size_s1] != '\0')
		size_s1++;
	size_s2 = 0;
	while (s2[size_s2] != '\0')
		size_s2++;
	ptr = malloc((size_s1 + size_s2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = -1;
	while (++i < size_s1)
		ptr[i] = s1[i];
	i--;
	while (++i < (size_s1 + size_s2))
		ptr[i] = s2[i - size_s1];
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;

	ptr = NULL;
	if (s1 == NULL || s2 == NULL)
		return (ptr);
	else
		ptr = ft_res(s1, s2, ptr);
	return (ptr);
}
/*
#include <stdio.h>
int	main(void)
{
	char s1[] = "qwerty";
	char s2[] = "azerty";
	char *ptr;

	ptr = ft_strjoin(s1, s2);
	printf("%s\n", ptr);
	ptr = ft_strjoin(NULL, s2);
        printf("%s\n", ptr);
	ptr = ft_strjoin(s1, NULL);
        printf("%s\n", ptr);
	ptr = ft_strjoin("\0", s2);
        printf("%s\n", ptr);
}
*/
