/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:20:43 by tviejo            #+#    #+#             */
/*   Updated: 2024/03/28 23:04:25 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int nb)
{
	if (nb < -1 && -129 < nb)
		nb = nb + 256;
	else if (65 <= nb && nb <= 90)
		return (nb + 32);
	return (nb);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	printf("%c\n",ft_tolower('A'));
	printf("%c",tolower('A'));
}
*/
