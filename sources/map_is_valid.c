/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_is_valid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 22:19:15 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/11 08:44:18 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	map_is_valid(t_game *game, char *map_argv)
{
	game->map = map_load(map_argv);
	if (!map_rect_check(game))
	{
		map_unload(game->map);
		return (0);
	}
	if (!map_char_check(game))
	{
		map_unload(game->map);
		return (0);
	}
	return (1);
}
