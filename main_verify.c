/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_verify.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:03:30 by ddiniz            #+#    #+#             */
/*   Updated: 2022/08/11 17:45:50 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(void)
{
	t_data data;

	data.connect = mlx_init();
	data.window = mlx_new_window(data.connect, 300, 300, "BOMBER MAN");
	data.img_width = SPRITE_WIDTH;
	data.img_height = SPRITE_HEIGHT;
	data.img = mlx_xpm_file_to_image(data.connect, "./images/ent.xpm", &data.img_width, &data.img_height);
	mlx_put_image_to_window(data.connect, data.window, data.img, 0,0);
	mlx_loop(data.connect);
	mlx_destroy_display(data.connect);
	return (0);
}
// int mlx_put_image_to_window ( void *mlx_ptr, void *win_ptr, void *img_ptr, int x, int y );
//        void *mlx_xpm_file_to_image ( void *mlx_ptr, char *filename, int *width, int *height );
