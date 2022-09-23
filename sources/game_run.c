/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_run.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:06:16 by ddiniz            #+#    #+#             */
/*   Updated: 2022/09/22 22:45:59 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	game_run(t_game *game, char *map_ber)
{
	ft_printf("map: %s\n", map_ber);
	game_init(game);
	sprites_load(game);
	game->img_player = mlx_xpm_file_to_image(game->mlx, PATH_S_PLAYER , &game->img_width, &game->img_height);
	mlx_hook(game->win, KeyPress, KeyPressMask, &handle_event, game);
	mlx_loop_hook(game->mlx, &render, game);
	mlx_loop(game->mlx);
	return (EXIT_SUCCESS);
}
