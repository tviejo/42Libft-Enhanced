/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:37:35 by tviejo            #+#    #+#             */
/*   Updated: 2024/06/15 18:58:32 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	if (str == NULL)
		return (ft_putstr("(null)"));
	write(1, &str[0], ft_strlen(str));
	return (ft_strlen(str));
}

int	ft_putrstr(char *str)
{
	int	i;
	int	output;

	if (str == NULL)
		return (ft_putstr("(null)"));
	i = 0;
	while (str[i] != '\0')
		i++;
	output = i;
	i--;
	while (i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
	return (output);
}

int	ft_putvoid(void *str)
{
	unsigned long int	address;

	if (str == NULL)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	address = (unsigned long int)str;
	return (2 + ft_converthexa(address, 'a'));
}
