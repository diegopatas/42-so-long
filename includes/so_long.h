/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 21:25:00 by ddiniz            #+#    #+#             */
/*   Updated: 2022/09/29 18:53:43 by ddiniz           ###   ########.fr       */
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
# include <math.h>

int	handle_event(int keycode, t_game *game);
int	render(t_game *game);

int	game_init(t_game *game);
int	game_run(t_game *game, char *map_ber);

int	sprites_load(t_game *game);
int	sprites_unload(t_game *game);

int	map_valid(char *map_ber);
void	map_init(t_game *game);
void	map_draw(t_game *game);

#endif
