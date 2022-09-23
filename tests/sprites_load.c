/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites_load.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 22:47:12 by ddiniz            #+#    #+#             */
/*   Updated: 2022/09/22 22:58:34 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	sprites_load(t_game *game)
{
	game->img_player = mlx_xpm_file_to_image
		(game->mlx, PATH_S_PLAYER , &game->img_width, &game->img_height);
	game->img_wall = mlx_xpm_file_to_image
		(game->mlx, PATH_S_WALL , &game->img_width, &game->img_height);
	game->img_collect = mlx_xpm_file_to_image
		(game->mlx, PATH_S_COLLECT , &game->img_width, &game->img_height);
	game->img_empty = mlx_xpm_file_to_image
		(game->mlx, PATH_S_EMPTY , &game->img_width, &game->img_height);
	game->img_exit = mlx_xpm_file_to_image
		(game->mlx, PATH_S_EXIT , &game->img_width, &game->img_height);
	return (EXIT_SUCCESS);
}
