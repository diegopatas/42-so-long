/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_char_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 23:34:35 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/12 09:12:22 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

static	int	map_walls_horiz_check(t_game *game)
{
	int	col;
	int	floor;

	floor = game->map_height - 1;
	col = 0;
	while (game->map[0][col] && col < game->map_width)
	{
		if (game->map[0][col] != '1')
			return (log_message("Wrong roof wall!", ERROR));
		col++;
	}
	col = 0;
	while (game->map[floor][col] && col < game->map_width)
	{
		if (game->map[floor][col] != '1')
			return (log_message("Wrong floor wall!", ERROR));
		col++;
	}
	return (log_message("Map's horizontal walls... ok!", LOG));
}

static	int	map_walls_vert_check(t_game *game)
{
	int	row;
	int	wallright;

	wallright = game->map_width - 1;
	row = 0;
	while (row < game->map_height)
	{
		if (game->map[row][wallright] != '1')
			return (log_message("Wrong vertical wall!", ERROR));
		row++;
	}
	row = 0;
	while (row < game->map_height)
	{
		if (game->map[row][0] != '1')
			return (log_message("Wrong vertical wall!", ERROR));
		row++;
	}
	log_message("Map's vertical walls... ok!", LOG);
	return (1);
}

static	int	map_statistics_check(int *nb_player, int *nb_wayout, int *nb_score)
{
	if (*nb_player == 0 || *nb_player > 1)
		return (log_message(
				"Invalid number of players! Please inform just one.", ERROR));
	else if (*nb_wayout == 0)
		return (log_message(
				"Invalid number of exits! Please inform just one.", ERROR));
	else if (*nb_score == 0)
		return (log_message(
				"Invalid number of collectibles! Please inform at least one.",
				ERROR));
	else
		return (1);
}

static	int	map_sprites_check(t_game *game)
{
	int	row;
	int	col;

	row = 1;
	col = 1;
	while (row < game->map_height - 1)
	{
		col = 1;
		while (col < game->map_width - 1)
		{
			if (game->map[row][col] == 'P')
				game->ctrl_player++;
			else if (game->map[row][col] == 'C')
				game->ctrl_score++;
			else if (game->map[row][col] == 'E')
				game->ctrl_wayout++;
			else if (game->map[row][col] != '0' && game->map[row][col] != '1')
				return (log_message("Invalid char inside the map!", ERROR));
			col++;
		}
		row++;
	}
	game->nb_wayout = game->ctrl_wayout;
	return (map_statistics_check
		(&game->ctrl_player, &game->ctrl_wayout, &game->ctrl_score));
}

int	map_char_check(t_game *game)
{
	if (!map_walls_horiz_check(game))
		return (0);
	if (!map_walls_vert_check(game))
		return (0);
	if (!map_sprites_check(game))
		return (0);
	return (1);
}
