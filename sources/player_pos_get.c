/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_pos_get.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:37:02 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/11 14:59:56 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	player_position_get(t_game *game)
{
	int	row;
	int	col;

	row = 0;
	while (row < game->map_height)
	{
		col = 0;
		while (col < game->map_width && game->map[row][col] != 'P')
			col++;
		if (game->map[row][col] == 'P')
			break ;
		row++;
	}
	game->player_row = row;
	game->player_col = col;
	return (0);
}
