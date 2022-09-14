/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 23:34:46 by ddiniz            #+#    #+#             */
/*   Updated: 2022/06/11 17:47:04 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_ptr(void *ptr)
{
	int	len;

	if (ptr == NULL)
		return (print_str("(nil)"));
	len = print_str("0x");
	len += print_base((long int) ptr, UNSIGNED_INT, BASE_HEX_LOW);
	return (len);
}
