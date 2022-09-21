/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:45:58 by ddiniz            #+#    #+#             */
/*   Updated: 2022/09/21 15:38:00 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <test_so_long.h>

void	run_all_tests(void)
{
	RUN_TEST_GROUP(game_init);
}

int	main(int argc, const char *argv[])
{
	return UnityMain(argc, argv, run_all_tests);
}
