/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   log_message.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:17:13 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/11 23:17:32 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	log_message(char *content, int flag)
{
	if (flag)
		ft_printf("Error%c\n", 0);
	ft_printf("Log: %s\n", content);
	return (0);
}
