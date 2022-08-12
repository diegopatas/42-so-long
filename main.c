/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:54:38 by ddiniz            #+#    #+#             */
/*   Updated: 2022/08/11 20:42:27 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	render(t_data *data)
{
	if (data->connect != NULL)
		return (1);
	mlx_put_image_to_window(data->connect, data->window, data->img, 0, 0);
	return (0);
}

int	handle_keypress(int keysym, t_data *data)
{
	if (keysym == XK_Escape)
	{
		mlx_destroy_window(data->connect, data->window);
		mlx_destroy_image(data->connect, data->img);
	}
	printf("Key Pressed: %d\n", keysym);
	return (0);
}

int	main(void)
{
	t_data	data;

	data.connect = mlx_init();
	data.img_width = SPRITE_WIDTH;
	data.img_height = SPRITE_HEIGHT;
	data.img = mlx_xpm_file_to_image(data.connect,
			"./images/ent.xpm", 
			&data.img_width, 
			&data.img_height);
	data.window = mlx_new_window(data.connect, 300, 300, "BOMBER MAN");
	mlx_loop_hook(data.connect, &render, &data);
	mlx_hook(data.window, KeyPress, KeyPressMask, &handle_keypress, &data);
	mlx_loop(data.connect);
	mlx_destroy_display(data.connect);
	free(data.connect);
	return (0);
}
