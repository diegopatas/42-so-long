/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:54:38 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/12 14:36:21 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	main(int argc, char *argv[1])
{
	if (argc == 2 && file_is_valid(argv[1]))
		return (game_run(argv[1]));
	log_message("invalid arguments!", ERROR);
	log_message("please informe a valid map!", LOG);
	log_message("try './so_long assets/maps/map.ber'", LOG);
	return (EXIT_SUCCESS);
}
