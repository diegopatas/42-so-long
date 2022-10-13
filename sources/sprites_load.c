/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites_load.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 22:47:12 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/13 16:33:40 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

static	void	sprite_unload_file(void *mlx, void *sprite)
{
	if (sprite != NULL)
		mlx_destroy_image(mlx, sprite);
	return ;
}

static	void	*sprites_load_file(t_game *game, char *path)
{
	return (mlx_xpm_file_to_image
		(game->mlx, path, &game->base_width, &game->base_height));
}

int	sprites_load(t_game *game)
{
	game->player = sprites_load_file(game, SPRITE_PATH_PLAYER);
	game->wall = sprites_load_file(game, SPRITE_PATH_WALL);
	game->collect = sprites_load_file(game, SPRITE_PATH_COLLECT);
	game->empty = sprites_load_file(game, SPRITE_PATH_EMPTY);
	game->wayout = sprites_load_file(game, SPRITE_PATH_WAYOUT);
	if (game->player == NULL || game->wall == NULL || game->collect == NULL
		|| game->empty == NULL || game->wayout == NULL)
	{
		log_message("invalid sprite file or it doesn't exit!", ERROR);
		sprite_unload_file(game->mlx, game->player);
		sprite_unload_file(game->mlx, game->wall);
		sprite_unload_file(game->mlx, game->collect);
		sprite_unload_file(game->mlx, game->empty);
		sprite_unload_file(game->mlx, game->wayout);
		mlx_destroy_window(game->mlx, game->win);
		mlx_destroy_display(game->mlx);
		map_unload(game->map);
		free(game->mlx);
		free(game);
		exit(0);
	}
	return (EXIT_SUCCESS);
}
