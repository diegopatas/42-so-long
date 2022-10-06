/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move_check.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:17:15 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/06 12:53:29 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

static	int player_move_try(t_game *game, int *player, int i, int j)
{
	if (game->map[i][j] != '1')
	{
		if (game->map[i][j] == 'C')
		{
			game->score--;
			if (!game->exit_flag)
				*player = '0';
			else
			{
				*player = 'E';
				game->exit_flag--;
			}
			game->map[i][j] = 'P';
		}
		else if (game->map[i][j] == 'E')
		{
			if (!game->score)
			{
				log_message("game over!");
				game_unload(game);
			}
			game->exit_flag++;
			*player = '0';
			game->map[i][j] = 'P';
		}
		else
		{
			if (!game->exit_flag)
				*player = '0';
			else
			{
				*player = 'E';
				game->exit_flag--;
			}
			game->map[i][j] = 'P';
		}
		log_message("player moved!");
	}
	return (0);
}

int	player_move_check(t_game *game, int direction, int row, int col)
{
	int	*player;

	player = &game->map[row][col];
	if (direction == MOVE_UP)
		player_move_try(game, player, row, col - STEP);
	else if (direction == MOVE_DOWN)
		player_move_try(game, player, row, col + STEP);
	else if (direction == MOVE_LEFT)
		player_move_try(game, player, row - STEP, col);
	else if (direction == MOVE_RIGHT)
		player_move_try(game, player, row + STEP, col);
	return (0);
}
