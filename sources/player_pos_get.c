/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_pos_get.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:37:02 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/05 22:38:31 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	player_position_get(t_game *game)
{
	int	row;
	int	col;

	row = 0;
	while (row < ROWS)
	{
		col = 0;
		while (col < COLS && game->map[row][col] != 'P')
		{
			col++;
		}
		if (game->map[row][col] == 'P')
			break ;
		row++;
	}
	game->p_row = row;
	game->p_col = col;
	return (0);
}
