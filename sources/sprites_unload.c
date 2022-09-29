/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites_unload.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 23:06:40 by ddiniz            #+#    #+#             */
/*   Updated: 2022/09/28 17:23:56 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	sprites_unload(t_game *game)
{
	mlx_destroy_image(game->mlx, game->img_player);
	game->img_player = NULL;
	mlx_destroy_image(game->mlx, game->img_wall);
	game->img_wall = NULL;
	mlx_destroy_image(game->mlx, game->img_collect);
	game->img_collect = NULL;
	mlx_destroy_image(game->mlx, game->img_empty);
	game->img_empty = NULL;
	mlx_destroy_image(game->mlx, game->img_exit);
	game->img_exit = NULL;
	if (game->img_player != NULL
		|| game->img_wall != NULL
		|| game->img_collect != NULL
		|| game->img_empty != NULL
		|| game->img_exit != NULL)
		return (1);
	return (EXIT_SUCCESS);
}
