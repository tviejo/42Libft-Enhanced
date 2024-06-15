/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:38:54 by tviejo            #+#    #+#             */
/*   Updated: 2024/06/15 18:51:27 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putrecurnbr(int nb)
{
	int		i;
	int		output;
	char	toprint[12];

	if (nb == 0)
		return (ft_putchar('0'));
	i = 0;
	output = 0;
	if (nb == INT_MIN)
		return (ft_putstr("-2147483648"));
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		output++;
	}
	while (nb > 0)
	{
		toprint[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	toprint[i] = '\0';
	output = output + ft_putrstr(toprint);
	return (output);
}

int	ft_puturecurnbr(unsigned int nb)
{
	int		i;
	int		output;
	char	toprint[12];

	if (nb == 0)
		return (ft_putchar('0'));
	i = 0;
	while (nb > 0)
	{
		toprint[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	toprint[i] = '\0';
	output = ft_putrstr(toprint);
	return (output);
}
