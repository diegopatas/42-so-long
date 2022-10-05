/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_run.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:06:16 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/03 22:19:10 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	game_run(t_game *game, char *map_ber)
{
	game_init(game);
	sprites_load(game);
	map_valid(map_ber);
	map_init(game);
	mlx_hook(game->win, KeyPress, KeyPressMask, &handle_event, game);
	mlx_loop_hook(game->mlx, &render, game);
	mlx_loop(game->mlx);
	return (EXIT_SUCCESS);
}
