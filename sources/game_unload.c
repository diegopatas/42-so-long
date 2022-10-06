/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_unload.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:56:57 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/05 15:58:21 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	game_unload(t_game *game)
{
	sprites_unload(game);
	mlx_destroy_window(game->mlx, game->win);
	mlx_destroy_display(game->mlx);
	free(game->mlx);
	free(game);
	exit(0);
}
