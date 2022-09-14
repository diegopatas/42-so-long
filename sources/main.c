/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:54:38 by ddiniz            #+#    #+#             */
/*   Updated: 2022/09/14 17:08:28 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	handle_no(t_game *game)
{
	mlx_put_image_to_window(game->connect, game->window, game->img, SPRITE_WIDTH, SPRITE_HEIGHT);
	return (0);
}

int	handle_key(int keycode, t_game *game)
{
	if (keycode == XK_Escape)
	{
		mlx_destroy_image(game->connect, game->img);
		mlx_destroy_window(game->connect, game->window);
		mlx_destroy_display(game->connect);
		free(game->connect);
		free(game);
		exit(0);
	}
	return (0);
}

int	main(void)
{
	t_game	*game;

	game = (t_game *)malloc(sizeof (t_game));
	game->connect = mlx_init();
	game->window = mlx_new_window(game->connect, 300, 300, "win");
	game->img_width = SPRITE_WIDTH;
	game->img_height = SPRITE_HEIGHT;
	game->img = mlx_xpm_file_to_image(game->connect, "./assets/images/ent.xpm", &game->img_width, &game->img_height);
	mlx_hook(game->window, KeyPress, KeyPressMask, &handle_key, game);
	mlx_loop_hook(game->connect, &handle_no, game);
	mlx_loop(game->connect);
	return (EXIT_SUCCESS);
}
