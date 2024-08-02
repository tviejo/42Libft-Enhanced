/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:38:54 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/02 13:29:50 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putrecurnbr(int nb, int fd)
{
	int		i;
	int		output;
	char	toprint[12];

	if (nb == 0)
		return (ft_putchar_fd_2('0', fd));
	i = 0;
	output = 0;
	if (nb == INT_MIN)
		return (ft_putstr_fd_2("-2147483648", fd));
	if (nb < 0)
	{
		ft_putchar_fd_2('-', fd);
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
	output = output + ft_putrstr(toprint, fd);
	return (output);
}

int	ft_puturecurnbr(unsigned int nb, int fd)
{
	int		i;
	int		output;
	char	toprint[12];

	if (nb == 0)
		return (ft_putchar_fd_2('0', fd));
	i = 0;
	while (nb > 0)
	{
		toprint[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	toprint[i] = '\0';
	output = ft_putrstr(toprint, fd);
	return (output);
}
