/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_event.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:54:09 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/04 22:46:29 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	handle_event(int keycode, t_game *game)
{
	if (keycode == XK_Escape)
	{
		sprites_unload(game);
		mlx_destroy_window(game->mlx, game->win);
		mlx_destroy_display(game->mlx);
		free(game->mlx);
		free(game);
		exit(0);
	}
	if (keycode == XK_c)
	{
		if(game->map[1][2] != 'P')
		{
			game->map[1][2] = 'P';
// 			game->map[1][4] = 'C';
		}
// 		if(game->map[1][2] == 'P')
// 		{
// 			game->map[1][4] = 'P';
// 			game->map[1][2] = 'C';
// 		}
		return (0);
	}
	if (keycode == XK_d)
	{
		if(game->map[1][2] != 'C')
			game->map[1][2] = 'C';
// 		if(game->map[1][2] == 'P')
// 			game->map[1][2] = 'C';
		return (0);
	}
	return (0);
}
