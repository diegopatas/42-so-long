/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:54:38 by ddiniz            #+#    #+#             */
/*   Updated: 2022/08/05 18:26:41 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>

int main(void)
{
	void	*connection;
	void	*window;

	connection = mlx_init();
	window = mlx_new_window(connection, 100, 100, "BOMBER MAN");
	mlx_loop(connection);
	mlx_destroy_window(connection, window);
	return (0);
}
