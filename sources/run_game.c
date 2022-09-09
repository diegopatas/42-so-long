/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_game.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:02:15 by ddiniz            #+#    #+#             */
/*   Updated: 2022/09/05 15:42:30 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	run_game(t_data *game)
{
	game->connect = mlx_init();
	game->img_width = SPRITE_WIDTH;
	game->img_height = SPRITE_HEIGHT;
	game->img = mlx_xpm_file_to_image(game->connect, "../images/ent.xpm", &game->img_width, &game->img_height);
	game->window = mlx_new_window(&game->connect, 300, 300, "BOMBER MAN");
	mlx_loop_hook(&game->connect, &render, &game);
	mlx_hook(&game->window, KeyPress, KeyPressMask, &handle_keypress, &game);
	mlx_loop(&game->connect);
	mlx_destroy_display(&game->connect);
	free(&game->connect);
	return (EXIT_SUCCESS);
}
