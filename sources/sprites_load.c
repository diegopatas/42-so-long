/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites_load.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 22:47:12 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/04 23:10:49 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

static	void *sprites_load_file(t_game *game, char *path)
{
	return (mlx_xpm_file_to_image(game->mlx, path, &game->width, &game->height));
}

int	sprites_load(t_game *game)
{
	game->width = SPRITE_BASE_WIDTH;
	game->height = SPRITE_BASE_HEIGHT;
	game->player = sprites_load_file(game, SPRITE_PATH_PLAYER);
	game->wall = sprites_load_file(game, SPRITE_PATH_WALL);
	game->collect = sprites_load_file(game, SPRITE_PATH_COLLECT);
	game->empty = sprites_load_file(game, SPRITE_PATH_EMPTY);
	game->wayout = sprites_load_file(game, SPRITE_PATH_WAYOUT);
	return (EXIT_SUCCESS);
}
