/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:38:21 by tviejo            #+#    #+#             */
/*   Updated: 2024/06/15 18:51:09 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_converthexa(unsigned long nb, char c)
{
	int		i;
	int		output;
	char	toprint[17];

	i = 0;
	if (nb == 0)
		return (ft_putchar('0'));
	while (nb > 0)
	{
		if (nb % 16 <= 9)
			toprint[i] = nb % 16 + '0';
		else
			toprint[i] = nb % 16 + c - 10;
		nb = nb / 16;
		i++;
	}
	toprint[i] = '\0';
	output = ft_putrstr(toprint);
	return (output);
}

int	ft_puthexalow(unsigned long nb)
{
	return (ft_converthexa(nb, 'a'));
}

int	ft_puthexahigh(unsigned long nb)
{
	return (ft_converthexa(nb, 'A'));
}
/*
int	main(void)
{
	ft_converthexa(15);
}
*/
