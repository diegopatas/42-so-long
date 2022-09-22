/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:54:38 by ddiniz            #+#    #+#             */
/*   Updated: 2022/09/21 22:32:02 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	main(int argc, char *argv[1])
{
	t_game	*game;

	game = (t_game *)malloc(sizeof (t_game));
	if (argc != 2)
	{
		ft_printf("Invalid number of arguments%c!\n", 0);
		free(game);
		return (EXIT_SUCCESS);
	}
	argv[1] = "test";
	game_init(game);
	game->img = mlx_xpm_file_to_image(game->mlx, "./assets/sprites/sprite_player.xpm", &game->img_width, &game->img_height);
	mlx_hook(game->win, KeyPress, KeyPressMask, &handle_event, game);
	mlx_loop_hook(game->mlx, &render, game);
	mlx_loop(game->mlx);
	return (EXIT_SUCCESS);
}
