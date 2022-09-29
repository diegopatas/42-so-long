/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:58:57 by ddiniz            #+#    #+#             */
/*   Updated: 2022/09/27 22:42:02 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	render(t_game *game)
{
	mlx_put_image_to_window
		(game->mlx, game->win, game->img_player, 0, 0);
	mlx_put_image_to_window
		(game->mlx, game->win, game->img_wall, 0, 32);
	mlx_put_image_to_window
		(game->mlx, game->win, game->img_collect, 32, 0);
	mlx_put_image_to_window
		(game->mlx, game->win, game->img_empty, 32, 32);
	mlx_put_image_to_window
		(game->mlx, game->win, game->img_exit, 32, 64);
	return (0);
}
