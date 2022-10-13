/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_is_path_valid.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:21:27 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/13 17:34:50 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

static	void	flood_fill(t_game *game, int x, int y)
{
	if (game->map[x][y] == '1' || game->map[x][y] == 'F')
		return ;
	if (game->map[x][y] == '0' || game->map[x][y] == 'C' ||
		game->map[x][y] == 'E' || game->map[x][y] == 'P')
	{
		if (game->map[x][y] == 'C')
			game->ctrl_score++;
		if (game->map[x][y] == 'E')
		{
			game->ctrl_wayout++;
			game->flag_wayout++;
		}
		game->map[x][y] = 'F';
		flood_fill(game, x + STEP, y);
		flood_fill(game, x - STEP, y);
		flood_fill(game, x, y + STEP);
		flood_fill(game, x, y - STEP);
		return ;
	}
}

int	map_is_path_valid(t_game *game, char *map_argv)
{
	game->nb_score = game->ctrl_score;
	game->nb_wayout = game->ctrl_wayout;
	game->ctrl_score = 0;
	game->ctrl_wayout = 0;
	player_position_get(game);
	flood_fill(game, game->player_row, game->player_col);
	if ((game->nb_score - game->ctrl_score) == 0
		&& ((game->nb_wayout - game->ctrl_wayout) == 0
			|| game->flag_wayout > 0))
	{
		game->ctrl_score = game->nb_score;
		game->ctrl_wayout = game->nb_wayout;
		map_unload(game->map);
		game->map = map_load(map_argv);
		return (1);
	}
	map_unload(game->map);
	return (log_message("invalid path!", ERROR));
}
