/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 18:00:47 by tviejo            #+#    #+#             */
/*   Updated: 2024/03/30 18:02:55 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find(const char *str, const char *to_find, size_t len)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0' && to_find[i] != '\0' && i < len)
	{
		if (str[i] != to_find[i])
			return (0);
		i++;
	}
	if (to_find[i] == '\0')
		return (1);
	else
		return (0);
}

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;

	i = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < len)
	{
		if (str[i] == to_find[0])
			if (ft_find(&str[i], to_find, len - i) == 1)
				return ((char *)str + i);
		i++;
	}
	return ((char *) NULL);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
        char    s1[] = "Hello Word!";
        char    s2[] = "Hello Word!!";

        printf("%s\n", ft_strnstr(s1, s2, 15));
}
*/
