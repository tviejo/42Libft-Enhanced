/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:37:09 by tviejo            #+#    #+#             */
/*   Updated: 2024/03/30 18:04:14 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int character)
{
	int		i;
	char	c;

	i = 0;
	if (i == 256 || i == -256)
		return ("\0");
	c = character;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	else
		return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
        char    s1[] = "ABCDEGHIDEFJKLMNOP";
	int	c;

	c = -300;
	while (c < 300)
	{
		if (strchr(s1,c) != ft_strchr(s1, c))
		{
			printf("\n\noriginale: %s",strchr(s1,c));
			printf("\nfonction:%s",ft_strchr(s1, c));
			printf("\n%d",c);
		}
		c++;
	}
	return (0);
}
*/
