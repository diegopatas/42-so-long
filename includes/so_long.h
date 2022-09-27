/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 21:25:00 by ddiniz            #+#    #+#             */
/*   Updated: 2022/09/26 20:42:46 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Copyright (C) 
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 * 
 * 2022 - Diego
 */

/**
 * @file	so_long.h
 * @brief	The main header file that groups all the subheaders.
 * @author	Diego Diniz
 * @version	Diego Diniz
 * @date	2022-09-26
 */


#ifndef SO_LONG_H
#define SO_LONG_H

# include <mlx.h>
# include <stdlib.h>
# include <X11/keysym.h>
# include <X11/X.h>
# include <stdio.h>
# include <libft.h>
# include <get_next_line.h>
# include <ft_printf.h>
# include <so_long_types.h>

/**
 * @brief Handle keypress
 *
 * @param int keycode	the key's correspondig integer
 * @param t_game game	the game struct
 *
 * @return int			success or failure indicator
 */
int	handle_event(int keycode, t_game *game);
int	render(t_game *game);
int	game_run(t_game *game, char *map_ber);
int	game_init(t_game *game);
int	sprites_load(t_game *game);
int	map_valid(char *map_ber);

#endif
