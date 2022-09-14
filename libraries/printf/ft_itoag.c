/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoag.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 22:57:33 by ddiniz            #+#    #+#             */
/*   Updated: 2022/06/11 17:42:17 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*reverse_buff(const char *buffer)
{
	char	*str;
	size_t	len;
	size_t	index;

	len = ft_strlen(buffer);
	index = 0;
	str = (char *) malloc((len + 1) * sizeof(char));
	if (str != NULL)
	{
		while (len--)
			str[index++] = buffer[len];
		str[index] = '\0';
	}
	return (str);
}

char	*ft_itoag(long long int n, int sign, char *base)
{
	unsigned long long int	num;
	char					buffer[28];
	int						neg;
	size_t					radix;
	size_t					index;

	radix = ft_strlen(base);
	if (radix == 0)
		return (NULL);
	index = 0;
	num = n;
	neg = (sign && n < 0);
	if (neg)
		num = -n;
	while (num)
	{
		buffer[index++] = base[num % radix];
		num /= radix;
	}
	if (index == 0)
		buffer[index++] = base[0];
	if (neg)
		buffer[index++] = '-';
	buffer[index] = '\0';
	return (reverse_buff(buffer));
}
