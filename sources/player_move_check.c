/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move_check.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:17:15 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/13 17:33:09 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

static	int	player_move(t_game *game, char *start, char *dest, char sprite)
{
	game->player_moves++;
	if (*dest == 'C')
		game->ctrl_score--;
	else if (*dest == 'E')
		game->ctrl_wayout--;
	else if (game->ctrl_wayout < game->nb_wayout)
		game->ctrl_wayout++;
	*start = sprite;
	*dest = 'P';
	ft_printf("Number of movements:%d\n", game->player_moves);
	return (0);
}

static	int	player_move_try(t_game *game, char *player_pos, int i, int j)
{
	char	*target_pos;

	target_pos = &game->map[i][j];
	if (*target_pos == '1')
		return (0);
	else if (*target_pos != 'E' && game->ctrl_wayout == game->nb_wayout)
		return (player_move(game, player_pos, target_pos, '0'));
	else if (*target_pos != 'E' && game->ctrl_wayout < game->nb_wayout
		&& game->ctrl_score > 0)
		return (player_move(game, player_pos, target_pos, 'E'));
	else if (*target_pos == 'E' && game->ctrl_score == 0)
	{
		game->player_moves++;
		ft_printf("Number of movements:%d\n", game->player_moves);
		game_unload(game);
	}
	else
		return (player_move(game, player_pos, target_pos, '0'));
	return (0);
}

int	player_move_check(t_game *game, int direction, int row, int col)
{
	char	*player;

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
