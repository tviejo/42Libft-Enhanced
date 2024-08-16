/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:20:43 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/16 17:39:11 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_toupper(int nb)
{
	if (nb < -1 && -129 < nb)
		nb = nb + 256;
	else if (97 <= nb && nb <= 122)
		return (nb - 32);
	return (nb);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	printf("%c\n",ft_toupper('z'));
	printf("%c",toupper('z'));
}
*/
