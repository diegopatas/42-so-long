/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_types.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 10:04:26 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/06 10:10:15 by ddiniz           ###   ########.fr       */
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
# define MOVE_UP 0
# define MOVE_DOWN 1
# define MOVE_LEFT 2
# define MOVE_RIGHT 3
# define STEP 1
# define ROWS 5
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
	int		p_row;
	int		p_col;
	int		exit_flag;
	int		score;
}	t_game;

#endif
