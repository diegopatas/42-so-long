/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_rect_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:44:34 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/11 23:30:15 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	map_rect_check(t_game *game)
{
	int	line_length;
	int	line_number;
	int	i;

	line_length = (int)ft_strlen(game->map[0]);
	line_number = 0;
	i = 0;
	while (game->map[i])
	{
		if ((int)ft_strlen(game->map[i]) != line_length)
		{
			log_message("Invalid map shape!", ERROR);
			return (0);
		}
		i++;
	}
	line_number = i++;
	game->map_width = line_length;
	game->map_height = line_number;
	return (map_size_check(line_length, line_number));
}
