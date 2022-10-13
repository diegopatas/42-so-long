/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 21:25:00 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/13 17:41:06 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file	so_long.h
 * @brief	The main header file that groups all the subheaders.
 * @author	Diego Diniz
 * @version	Diego Diniz
 * @date	2022-09-26
 */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <mlx.h>
# include <stdlib.h>
# include <fcntl.h>
# include <X11/keysym.h>
# include <X11/X.h>
# include <stdio.h>
# include <libft.h>
# include <get_next_line.h>
# include <ft_printf.h>
# include <so_long_types.h>

int		event_key_handle(int keycode, t_game *game);
int		event_click_handle(t_game *game);

int		file_is_valid(char *file);

int		game_render(t_game *game);
int		game_run(char *map_argv);
int		game_attribute_init(t_game *game);
int		game_interface_load(t_game *game);
void	game_interface_unload(t_game *game, int flag_mlx, int flag_win);
int		game_unload(t_game *game);

int		sprites_load(t_game *game);
int		sprites_unload(t_game *game);

int		map_is_valid(t_game *game, char *map_argv);
int		map_is_path_valid(t_game *game, char *map_argv);
int		map_rect_check(t_game *game);
int		map_size_check(int width, int height);
int		map_char_check(t_game *game);
void	map_draw(t_game *game);
char	**map_load(char *map_argv);
int		map_unload(char **map_target);

int		player_move_check(t_game *game, int direction, int i, int j);
int		player_position_get(t_game *game);

int		log_message(char *content, int flag);

#endif
