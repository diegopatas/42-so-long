/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_key_handle.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:56:43 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/12 00:28:13 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	event_key_handle(int keycode, t_game *game)
{
	if (keycode == XK_Escape || keycode == XK_q || keycode == XK_Q)
		game_unload(game);
	else if (keycode == XK_w || keycode == XK_W || keycode == XK_Up)
	{
		player_position_get(game);
		player_move_check(game, MOVE_UP, game->player_row, game->player_col);
	}
	else if (keycode == XK_s || keycode == XK_S || keycode == XK_Down)
	{
		player_position_get(game);
		player_move_check(game, MOVE_DOWN, game->player_row, game->player_col);
	}
	else if (keycode == XK_a || keycode == XK_A || keycode == XK_Left)
	{
		player_position_get(game);
		player_move_check(game, MOVE_LEFT, game->player_row, game->player_col);
	}
	else if (keycode == XK_d || keycode == XK_D || keycode == XK_Right)
	{
		player_position_get(game);
		player_move_check(game, MOVE_RIGHT, game->player_row, game->player_col);
	}
	return (0);
}
