/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:33:57 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/25 17:02:16 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	number;

	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if ((*str == 43) || (*str == 45) || ft_isdigit(*str))
	{
		sign = 1;
		if (*str == 45)
			sign = -1;
		if ((*str == 45) || (*str == 43))
			str++;
		number = 0;
		while (*str && (ft_isdigit(*str)))
		{
			number = number * 10 + (*str - 48);
			str++;
		}
		return (number * sign);
	}
	return (0);
}
