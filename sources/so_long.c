/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:54:38 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/11 23:26:06 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	main(int argc, char *argv[1])
{
	if (argc == 2)
		return (game_run(argv[1]));
	log_message("Invalid number of arguments!", ERROR);
	log_message("Please informe a valid map!", LOG);
	log_message("Try './so_long assests/maps/map.ber'", LOG);
	return (EXIT_SUCCESS);
}
