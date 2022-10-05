/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_types.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 10:04:26 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/04 23:08:14 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_TYPES_H
# define SO_LONG_TYPES_H

# define SPRITE_PATH_EMPTY "./assets/sprites/sprite_empty.xpm"
# define SPRITE_PATH_WALL "./assets/sprites/sprite_wall.xpm"
# define SPRITE_PATH_PLAYER "./assets/sprites/sprite_player.xpm"
# define SPRITE_PATH_COLLECT "./assets/sprites/sprite_collectible.xpm"
# define SPRITE_PATH_WAYOUT "./assets/sprites/sprite_exit.xpm"
# define SPRITE_BASE_WIDTH 32
# define SPRITE_BASE_HEIGHT 32
# define ROWS 3
# define COLS 6

typedef struct	s_game {
	void	*mlx;
	void	*win;
	int		map[ROWS][COLS];
	void	*empty;
	void	*wall;
	void	*player;
	void	*collect;
	void	*wayout;
	int		width;
	int		height;
	int		x;
	int		y;
}	t_game;

#endif
