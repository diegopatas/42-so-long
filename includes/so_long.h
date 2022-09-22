/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 21:25:00 by ddiniz            #+#    #+#             */
/*   Updated: 2022/09/21 18:56:20 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	handle_event(int keycode, t_game *game);
int	render(t_game *game);
int	game_init(t_game *game);

#endif
