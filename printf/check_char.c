/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:32:38 by ddiniz            #+#    #+#             */
/*   Updated: 2022/06/11 17:30:16 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	check_char(char c, va_list args)
{
	if (c == 'c')
		return (print_char(va_arg(args, int)));
	if (c == 's')
		return (print_str(va_arg(args, char *)));
	if (c == 'd' || c == 'i')
		return (print_nbr(va_arg(args, int), SIGNED_INT));
	if (c == 'u')
		return (print_nbr(va_arg(args, unsigned int), UNSIGNED_INT));
	if (c == 'x')
		return (print_hex(va_arg(args, long int), LOWER));
	if (c == 'X')
		return (print_hex(va_arg(args, long int), UPPER));
	if (c == 'p')
		return (print_ptr(va_arg(args, void *)));
	if (c == '%')
		return (print_char('%'));
	return (0);
}
