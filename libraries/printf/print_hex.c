/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 23:14:46 by ddiniz            #+#    #+#             */
/*   Updated: 2022/06/11 17:31:55 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned int n, int casetype)
{
	if (casetype)
		return (print_base(n, UNSIGNED_INT, BASE_HEX_UPP));
	else
		return (print_base(n, UNSIGNED_INT, BASE_HEX_LOW));
}
