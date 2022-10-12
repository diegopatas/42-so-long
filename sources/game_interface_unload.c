/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_interface_unload.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:57:49 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/10 16:58:07 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

void	game_interface_unload(t_game *game, int flag_mlx, int flag_win)
{
	if (flag_win == 1)
		mlx_destroy_window(game->mlx, game->win);
	if (flag_mlx == 1)
		mlx_destroy_display(game->mlx);
	map_unload(game->map);
	free(game->mlx);
	free(game);
	exit(1);
}
