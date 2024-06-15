/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:15:21 by tviejo            #+#    #+#             */
/*   Updated: 2024/05/18 18:26:50 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	test(unsigned int i, char *s)
{
	printf("%d", s[0] + i);
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		while (s[i] != '\0')
		{
			f(i, s + i);
			i++;
		}
	}
}
/*
int	main(void)
{
	char *s = "000000000";

	ft_striteri(s, &test);
}
*/
