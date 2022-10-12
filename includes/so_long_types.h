/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_types.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 10:04:26 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/12 00:05:56 by ddiniz           ###   ########.fr       */
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
# define MAP_MAX_SIZE 256
# define ERROR 1
# define LOG 0

typedef struct	s_game {
	void	*mlx;
	void	*win;
	char	**map;
	void	*empty;
	void	*wall;
	void	*player;
	void	*collect;
	void	*wayout;
	int		base_width;
	int		base_height;
	int		map_width;
	int		map_height;
	int		player_row;
	int		player_col;
	int		player_moves;
	int		ctrl_score;
	int		ctrl_player;
	int		ctrl_wayout;
	int		nb_wayout;
}	t_game;

#endif
