/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 10:04:26 by ddiniz            #+#    #+#             */
/*   Updated: 2022/09/16 22:27:23 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
#define TYPES_H

# define SPRITE_WIDTH 16
# define SPRITE_HEIGHT 16

typedef struct s_game {
		void	*mlx;
		void	*win;
		void	*img;
// 		char	*sprite = "../assets/sprites/sprite_wall.xpm";
		int		img_width;
		int		img_height;
} t_game;

#endif

