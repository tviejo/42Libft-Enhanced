/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:37:35 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/02 13:38:53 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar_fd_2(int c, int fd)
{
	write(fd, &c, 1);
	return (1);
}

int	ft_putstr_fd_2(char *str, int fd)
{
	if (str == NULL)
		return (ft_putstr_fd_2("(null)", fd));
	write(1, &str[0], ft_strlen(str));
	return (ft_strlen(str));
}

int	ft_putrstr(char *str, int fd)
{
	int	i;
	int	output;

	if (str == NULL)
		return (ft_putstr_fd_2("(null)", fd));
	i = 0;
	while (str[i] != '\0')
		i++;
	output = i;
	i--;
	while (i >= 0)
	{
		ft_putchar_fd_2(str[i], fd);
		i--;
	}
	return (output);
}

int	ft_putvoid(void *str, int fd)
{
	unsigned long int	address;

	if (str == NULL)
		return (ft_putstr_fd_2("(nil)", fd));
	ft_putstr_fd_2("0x", fd);
	address = (unsigned long int)str;
	return (2 + ft_converthexa(address, 'a', fd));
}
