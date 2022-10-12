/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_attribute_init.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:15:16 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/12 00:06:22 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	game_attribute_init(t_game *game)
{
	game->mlx = NULL;
	game->win = NULL;
	game->map = NULL;
	game->empty = NULL;
	game->wall = NULL;
	game->player = NULL;
	game->collect = NULL;
	game->wayout = NULL;
	game->base_width = 0;
	game->base_height = 0;
	game->map_width = 0;
	game->player_row = 0;
	game->player_col = 0;
	game->player_moves = 0;
	game->ctrl_score = 0;
	game->ctrl_player = 0;
	game->ctrl_wayout = 0;
	game->nb_wayout = 0;
	return (0);
}
