/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:40:05 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/06 09:53:36 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

void	map_init(t_game *game)
{
	int	map[ROWS][COLS] = {
		{'1','1','1','1','1','1'},
		{'1','E','C','0','P','1'},
		{'1','0','0','C','0','1'},
		{'1','C','0','0','0','1'},
		{'1','1','1','1','1','1'}
	};
	ft_memcpy(game->map, map, sizeof(int) * ROWS * COLS);
	player_position_get(game);
	game->score = 3;
	game->exit_flag = 0;
	return ;
}
