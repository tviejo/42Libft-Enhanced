/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:36:32 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/02 13:29:18 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_convert(char c, va_list args, int fd)
{
	int	i;

	i = -1;
	if (c == 'c')
		i = ft_putchar_fd_2(va_arg(args, int), fd);
	else if (c == 's')
		i = ft_putstr_fd_2(va_arg(args, char *), fd);
	else if (c == 'p')
		i = ft_putvoid(va_arg(args, void *), fd);
	else if (c == 'd' || c == 'i')
		i = ft_putrecurnbr(va_arg(args, int), fd);
	else if (c == 'u')
		i = ft_puturecurnbr(va_arg(args, unsigned int), fd);
	else if (c == 'x')
		i = ft_puthexalow(va_arg(args, unsigned int), fd);
	else if (c == 'X')
		i = ft_puthexahigh(va_arg(args, unsigned int), fd);
	else if (c == '%')
		i = ft_putchar_fd_2('%', fd);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int		nb_byte;

	nb_byte = ft_dprintf(1, str);
	return (nb_byte);
}

int	ft_dprintf(int fd, const char *str, ...)
{
	va_list	args;
	int		i;
	int		converted;
	int		nb_byte;

	if (str == NULL)
		return (-1);
	va_start(args, str);
	i = -1;
	nb_byte = 0;
	while (str[++i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			converted = ft_convert(str[i], args, fd);
			nb_byte += converted;
			if (converted == -1)
				return (va_end(args), -1);
		}
		else
			nb_byte += ft_putchar_fd_2(str[i], fd);
	}
	return (va_end(args), nb_byte);
}
/*
#include <stdio.h>
int     main(void)
{
        void    *ptr;

        ptr = "a";
        
        ft_printf("%s%c%p%d%i%u%x%X%%","qwerty",'a',ptr,-51,-99,-666,15,-15);

	printf("\n\nteststr:\n");
        ft_printf("%s","qwerty");
        printf("\n%s","qwerty");

	printf("\n\ntestc:\n");
        ft_printf("%c",'a');
        printf("\n%c",'a');

	printf("\n\ntestptr:\n");
        ft_printf("%p",ptr);
        printf("\n%p",ptr);
	printf("\n");
        ft_printf("%p",NULL);
        printf("\n%p",NULL);

	printf("\n\ntestd:\n");
        ft_printf("%d",0);
        printf("\n%d",0);
	printf("\n");
        ft_printf("%d",2147483647);
        printf("\n%d",2147483647);
	printf("\n");
        ft_printf("%d",-2147483647);
        printf("\n%d",-2147483647);

	printf("\n\ntesti:\n");
        ft_printf("%i",0);
        printf("\n%i",0);
	printf("\n");
        ft_printf("%i",2147483647);
        printf("\n%i",2147483647);
	printf("\n");
        ft_printf("%i",-2147483647);
        printf("\n%i",-2147483647);
}*/
