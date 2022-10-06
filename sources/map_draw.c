/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_draw.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:58:25 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/06 12:58:30 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

void	map_draw_line(t_game *game, int row, int col)
{
	void	*sprite;

	sprite = NULL;
	if (game->map[row][col] == '1')
		sprite = game->wall;
	if (game->map[row][col] == 'E')
		sprite = game->wayout;
	if (game->map[row][col] == 'C')
		sprite = game->collect;
	if (game->map[row][col] == 'P')
		sprite = game->player;
	if (game->map[row][col] == '0')
		sprite = game->empty;
	mlx_put_image_to_window(game->mlx, game->win, sprite,
			SPRITE_BASE_WIDTH * row, SPRITE_BASE_HEIGHT * col);
	return ;
}

void	map_draw(t_game *game)
{
	int	rows;
	int	cols;

	rows = 0;
	while (rows < ROWS)
	{
		cols = 0;
		while (cols < COLS)
		{
			map_draw_line(game, rows, cols);
			cols++;
		}
		rows++;
	}
	return ;
}
