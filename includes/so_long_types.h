/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_types.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 10:04:26 by ddiniz            #+#    #+#             */
/*   Updated: 2022/09/28 17:28:18 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_TYPES_H
# define SO_LONG_TYPES_H

# define PATH_S_EMPTY "./assets/sprites/sprite_empty.xpm"
# define PATH_S_WALL "./assets/sprites/sprite_wall.xpm"
# define PATH_S_PLAYER "./assets/sprites/sprite_player.xpm"
# define PATH_S_COLLECT "./assets/sprites/sprite_collectible.xpm"
# define PATH_S_EXIT "./assets/sprites/sprite_exit.xpm"
# define SPRITE_WIDTH 32
# define SPRITE_HEIGHT 32
# define ROWS 5
# define COLS 3

typedef struct	s_game {
	void	*mlx;
	void	*win;
	int		map[ROWS][COLS];
	int		img_width;
	int		img_height;
	void	*img_empty;
	void	*img_wall;
	void	*img_player;
	void	*img_collect;
	void	*img_exit;
	int		x;
	int		y;
}	t_game;

#endif
