/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_run.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:06:16 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/12 00:27:27 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	game_run(char *map_argv)
{
	t_game	*game;

	game = (t_game *)malloc(sizeof (t_game));
	if (game != NULL)
	{
		game_attribute_init(game);
		if (map_is_valid(game, map_argv) && map_is_path_valid())
		{
			game_interface_load(game);
			sprites_load(game);
			mlx_hook(game->win, KeyPress, KeyPressMask, &event_key_handle, game);
			mlx_loop_hook(game->mlx, &render, game);
			mlx_loop(game->mlx);
			return (EXIT_SUCCESS);
		}
	}
	free(game);
	game = NULL;
	exit (0);
}
