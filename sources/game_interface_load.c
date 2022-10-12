/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_interface_load.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:14:29 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/10 17:00:16 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	game_interface_load(t_game *game)
{
	game->base_width = SPRITE_BASE_WIDTH;
	game->base_height = SPRITE_BASE_HEIGHT;
	game->mlx = mlx_init();
	if (game->mlx == NULL)
		game_interface_unload(game, 1, 0);
	game->win = mlx_new_window(game->mlx,
		game->base_width * game->map_width,
		game->base_height * game->map_height,
		"Bomberman Game");
	if (game->win == NULL)
		game_interface_unload(game, 1, 1);
	return (EXIT_SUCCESS);
}
