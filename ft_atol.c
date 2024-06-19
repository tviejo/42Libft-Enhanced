#include "libft.h"

long	ft_atol(const char *str)
{
	unsigned long int	cpt;
	int						sign;
	long int	value;

	cpt = 0;
	value = 0;
	sign = 1;
	while ((str[cpt] == ' ' || (9 <= str[cpt] && str[cpt] <= 13)))
		cpt++;
	if (str[cpt] == '-' || str[cpt] == '+')
		if (str[cpt++] == '-')
			sign *= -1;
	while ('0' <= str[cpt] && str[cpt] <= '9')
	{
		value = (value * 10) + (str[cpt] - '0');
		cpt++;
	}
	return (value * sign);
}