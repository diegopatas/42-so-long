/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:54:38 by ddiniz            #+#    #+#             */
/*   Updated: 2022/09/22 10:23:38 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	main(int argc, char *argv[1])
{
	t_game	*game;

	game = (t_game *)malloc(sizeof (t_game));
	if (argc == 2)
		return (game_run(game, argv[1]));
	ft_printf("Invalid number of arguments%c!\n", 0);
	free(game);
	return (EXIT_SUCCESS);
}
