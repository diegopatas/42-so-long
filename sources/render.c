/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:58:57 by ddiniz            #+#    #+#             */
/*   Updated: 2022/09/22 22:53:03 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	render(t_game *game)
{
	mlx_put_image_to_window
		(game->mlx, game->win, game->img_player, SPRITE_WIDTH, SPRITE_HEIGHT);
	mlx_put_image_to_window
		(game->mlx, game->win, game->img_wall, 40, 40);
	return (0);
}
