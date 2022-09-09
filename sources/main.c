/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:54:38 by ddiniz            #+#    #+#             */
/*   Updated: 2022/09/08 18:33:59 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_data	*game;

	if (argc > 2 || argc < 2)
	{
		ft_printf("Error: wrong number of arguments.\nPlease insert one map!\n");
		ft_printf("Argument: %s\n", argv[1]);
	}
	else
	{
		game = (t_data *)malloc(sizeof game);
		run_game(game);
	}
	return(EXIT_SUCCESS);
}
