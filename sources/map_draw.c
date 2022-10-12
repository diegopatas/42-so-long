/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_draw.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:58:25 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/10 22:33:04 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

void	map_draw_line(t_game *game, int row, int col)
{
	void	*sprite;

	sprite = NULL;
	if (game->map[row][col] == '1')
		sprite = game->wall;
	else if (game->map[row][col] == 'E')
		sprite = game->wayout;
	else if (game->map[row][col] == 'C')
		sprite = game->collect;
	else if (game->map[row][col] == 'P')
		sprite = game->player;
	else if (game->map[row][col] == '0')
		sprite = game->empty;
	mlx_put_image_to_window(game->mlx, game->win, sprite,
		SPRITE_BASE_WIDTH * row, SPRITE_BASE_HEIGHT * col);
	return ;
}

void	map_draw(t_game *game)
{
	int	row;
	int	col;

	row = 0;
	while (row < game->map_height)
	{
		col = 0;
		while (col < game->map_width)
		{
			map_draw_line(game, row, col);
			col++;
		}
		row++;
	}
	return ;
}
