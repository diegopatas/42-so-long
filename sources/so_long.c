/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:54:38 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/06 12:28:22 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	main(int argc, char *argv[1])
{
	t_game	*game;

	game = (t_game *)malloc(sizeof (t_game));
	if (argc == 2)
		return (game_run(game, argv[1]));
	log_message("Invalid number of arguments.");
	log_message("Please informe a valid map.");
	log_message("Try './so_long assests/maps/map.ber'");
	free(game);
	return (EXIT_SUCCESS);
}
