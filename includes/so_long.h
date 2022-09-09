/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 21:25:00 by ddiniz            #+#    #+#             */
/*   Updated: 2022/09/01 17:36:29 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
#define SO_LONG_H

# include <mlx.h>
# include <stdlib.h>
# include <X11/keysym.h>
# include <X11/X.h>
# include <stdio.h>

# include "../printf/ft_printf.h"
# include "types.h"

int	run_game(t_data *game);
int	handle_keypress(int keysym, t_data *data);
int	render(t_data *data);

#endif
