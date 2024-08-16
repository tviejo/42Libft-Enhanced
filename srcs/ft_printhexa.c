/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:38:21 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/16 17:39:11 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_converthexa(unsigned long nb, char c, int fd)
{
	int		i;
	int		output;
	char	toprint[17];

	i = 0;
	if (nb == 0)
		return (ft_putchar_fd_2('0', fd));
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
	output = ft_putrstr(toprint, fd);
	return (output);
}

int	ft_puthexalow(unsigned long nb, int fd)
{
	return (ft_converthexa(nb, 'a', fd));
}

int	ft_puthexahigh(unsigned long nb, int fd)
{
	return (ft_converthexa(nb, 'A', fd));
}
/*
int	main(void)
{
	ft_converthexa(15);
}
*/
