/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:45:58 by ddiniz            #+#    #+#             */
/*   Updated: 2022/06/11 17:22:43 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	index;
	int		len;

	len = 0;
	index = 0;
	if (str == NULL)
		return (-1);
	va_start(args, str);
	while (str[index])
	{
		if (str[index] == '%' && ft_strchr("csdiuxXp%", str[index + 1]))
			len += check_char(str[++index], args);
		else
			len += print_char(str[index]);
		index++;
	}
	va_end(args);
	return (len);
}
