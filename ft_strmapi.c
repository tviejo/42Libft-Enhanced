/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:15:05 by tviejo            #+#    #+#             */
/*   Updated: 2024/05/17 17:07:00 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	test(unsigned int i, char c)
{
	i++;
	return (c - 32);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*output;
	int		i;

	if (s == NULL)
		output = NULL;
	else if (f == NULL)
		output = ft_strdup(s);
	else
	{
		output = malloc((ft_strlen(s) + 1) * sizeof(char));
		if (output == NULL)
			return (NULL);
		i = 0;
		while (s[i] != '\0')
		{
			output[i] = f(i, s[i]);
			i++;
		}
		output[i] = '\0';
	}
	return (output);
}
/*
int	main(void)
{
	printf("%s\n",ft_strmapi("qwerty", &test));
	printf("%s\n",ft_strmapi(NULL, &test));
}
*/
