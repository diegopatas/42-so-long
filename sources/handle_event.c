/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_event.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:54:09 by ddiniz            #+#    #+#             */
/*   Updated: 2022/09/27 23:07:43 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	handle_event(int keycode, t_game *game)
{
	if (keycode == XK_Escape)
	{
// 		mlx_loop_end(game->mlx);
		sprites_unload(game);
		mlx_destroy_window(game->mlx, game->win);
		mlx_destroy_display(game->mlx);
		free(game->mlx);
		free(game);
		exit(0);
	}
	return (0);
}
