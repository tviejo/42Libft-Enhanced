/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 20:57:40 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/16 17:39:11 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_charset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_lenstart(char const *s1, char const *set)
{
	int	i;

	i = 0;
	if (set != NULL)
	{
		while (s1[i] != '\0' && ft_charset(s1[i], set) == 1)
			i++;
	}
	return (i);
}

static int	ft_lenend(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1);
	if (set != NULL)
	{
		while (i > 0 && ft_charset(s1[i - 1], set) == 1)
			i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*ptr;

	if (set == NULL)
		return ((char *)s1);
	if (s1 == NULL)
	{
		ptr = (char *)malloc(1 * sizeof(char));
		if (ptr == NULL)
			return (ptr);
		ptr[0] = '\0';
	}
	else
	{
		start = ft_lenstart(s1, set);
		end = ft_lenend(s1 + start, set);
		ptr = ft_substr(s1, start, end);
	}
	return (ptr);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strtrim("qwertyasedfg", "m"));
	printf("%s\n", ft_strtrim("      q   qqqaqaaagqqq q qq", "q "));
	printf("%s\n", ft_strtrim(NULL, "yaf"));
        printf("%s\n", ft_strtrim("qwertyyasyedyfg", NULL));
	return (1);
}
*/
