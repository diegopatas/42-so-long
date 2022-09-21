/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:54:38 by ddiniz            #+#    #+#             */
/*   Updated: 2022/09/16 22:26:23 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	main(void)
{
	t_game	*game;

	game = (t_game *)malloc(sizeof (t_game));
	game->mlx = mlx_init();
	game->win = mlx_new_window(game->mlx, 300, 300, "win");
	game->img_width = SPRITE_WIDTH;
	game->img_height = SPRITE_HEIGHT;
	game->img = mlx_xpm_file_to_image(game->mlx, "./assets/sprites/sprite_player.xpm", &game->img_width, &game->img_height);
	mlx_hook(game->win, KeyPress, KeyPressMask, &handle_event, game);
	mlx_loop_hook(game->mlx, &render, game);
	mlx_loop(game->mlx);
	return (EXIT_SUCCESS);
}
