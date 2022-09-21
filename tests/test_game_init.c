/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_game_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:21:20 by ddiniz            #+#    #+#             */
/*   Updated: 2022/09/21 17:58:19 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <test_so_long.h>
#include <stdlib.h>
#include <mlx.h>

TEST_GROUP(game_init);

static t_game	game;

TEST_SETUP(game_init)
{
}

TEST_TEAR_DOWN(game_init)
{
}

TEST(game_init, mlx_connection)
{
	game.mlx = mlx_init();
	TEST_ASSERT_NOT_NULL(game.mlx);
}
