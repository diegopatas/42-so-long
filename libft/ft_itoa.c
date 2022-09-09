/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 09:13:49 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/29 15:18:57 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*ft_n_zero(void)
{
	char	*str;

	str = (char *)malloc(2 * sizeof(char));
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

static char	*ft_n_neg(int n)
{
	char			*str;
	long			spot;
	int				decomp;
	unsigned int	x;

	x = n * -1;
	decomp = x;
	spot = 0;
	while (decomp)
	{
		decomp /= 10;
		spot++;
	}
	str = (char *)malloc((spot + 2) * sizeof(char));
	if (!str)
		return (0);
	str[spot + 1] = '\0';
	while (x)
	{
		str[spot] = x % 10 + '0';
		x /= 10;
		spot--;
	}
	str[spot] = '-';
	return (str);
}

static char	*ft_n_pos(int n)
{
	char	*str;
	long	spot;
	int		decomp;

	decomp = n;
	spot = 0;
	while (decomp)
	{
		decomp /= 10;
		spot++;
	}
	str = (char *)malloc((spot + 1) * sizeof(char));
	if (!str)
		return (0);
	str[spot] = '\0';
	while (n)
	{
		str[spot - 1] = n % 10 + '0';
		n /= 10;
		spot--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	if (n == 0)
		return (ft_n_zero());
	else if (n > 0)
		return (ft_n_pos(n));
	else
		return (ft_n_neg(n));
}
