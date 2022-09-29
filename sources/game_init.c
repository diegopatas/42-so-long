/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:14:29 by ddiniz            #+#    #+#             */
/*   Updated: 2022/09/27 17:39:25 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

// TODO: implement module bellow

static int	game_destroy(void)
{
	return 0;
}

int	game_init(t_game *game)
{
	game->mlx = mlx_init();
	if (game->mlx == NULL)
	{
		mlx_destroy_display(game->mlx);
		free(game->mlx);
		free(game);
		exit(1);
	}
	game->win = mlx_new_window(game->mlx, 300, 300, "win");
	if (game->win == NULL)
	{
		mlx_destroy_window(game->mlx, game->win);
		mlx_destroy_display(game->mlx);
		free(game->mlx);
		free(game);
		exit(1);
	}
	game_destroy();
	return (EXIT_SUCCESS);
}
